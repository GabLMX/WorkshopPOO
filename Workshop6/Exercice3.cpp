#include <iostream>
#include <stack>

using namespace std;

//"g++ Exercice3.cpp -o main" puis "./main"

class changeBase{
private:
    stack<int> pile; //La pile pour nos nombres binaires.
    //push ajoute les valeurs en haut de la pile et pop détruit la valeur en haut de la pile.
public:
    changeBase(){}

    stack<int> toBase(int entier, int base){
        //Nettoyage si on ré-utilise l'objet.
        while (!pile.empty()) {
            pile.pop();
        }

        if(entier == 0){
            pile.push(0);
        }

        while(entier != 0){
            pile.push(entier%base);
            entier = entier / base;
            //Normalement c'est rounded down.
        }

        return pile;
    }

    void print(){
        string bin;
        while(not pile.empty()){
            bin += to_string(pile.top()); //La valeur en haut.
            pile.pop();
        }
        cout << bin << "\n";
    }
};

int main(void){
    changeBase yaWannaTest;
    int nbr = 386;
    int baseNbr = 2;

    cout << "Test 1\n";
    yaWannaTest.toBase(nbr, baseNbr);
    yaWannaTest.print();

    nbr = 256;
    cout << "Test 2\n";
    yaWannaTest.toBase(nbr, baseNbr);
    yaWannaTest.print();
    //Résultats du print à vérifier..

    nbr = 511;
    cout << "Test 3\n";
    yaWannaTest.toBase(nbr, baseNbr);
    yaWannaTest.print();

    return 0;
}