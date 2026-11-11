#include <iostream>

class Fraction{
private:
    int numerateur;
    int denominateur;

public:
    Fraction(int num, int denom){
        numerateur = num;
        denominateur = denom;
    }

    int getNumerateur(){
        return numerateur;
    }
    int setNumerateur(int num){
        numerateur = num;
        return num;
    }

    int getDenominateur(){
        return denominateur;
    }
    int setDenominateur(int denom){
        denominateur = denom;
        return denom;
    }

    Fraction add(Fraction f){
        return Fraction(
            (numerateur * f.denominateur + f.numerateur * denominateur),
            denominateur * f.denominateur
        );
    }

    std::string sub(Fraction f){
        return "Pas à faire, tout comme les deux autres.";
    }
};

int main(){
    Fraction f1(5, 8);
    Fraction f2 (10, 5);
    std::cout << "La fraction d'exemple est: " << f1.getNumerateur() << "/" << f1.getDenominateur() << '\n';

    f1.setNumerateur(6);
    f1.setDenominateur(12);
    std::cout << "Après changement: " << f1.getNumerateur() << "/" << f1.getDenominateur() << '\n';

    Fraction f3 = f1.add(f2); //Nécessaire; add() ne change pas f1 avec sont return.
    std::cout << "La fraction finale est: " << f3.getNumerateur() << "/" << f3.getDenominateur() << '\n';
}