#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

//"g++ Exercice2.cpp -o main" puis "./main"

class Unique{
private:
    vector<int> tableau;
    unordered_map<int, bool> verif_uniq; //Ne marche pas si on n'include pas unordered_map.
public:
    Unique() : tableau({}){}

    Unique(vector<int> valeurs){
        for(int x : valeurs){
            if(verif_uniq.find(x) == verif_uniq.end()){
                tableau.push_back(x);
                verif_uniq[x] = true;
            }
        }
    }

    bool hasValue(int n){
        return verif_uniq[n];
        /*
        //Solution qui n'est pas optimisée et n'utilise pas le map.
        for(int x : tableau){
            //x est la valeur.
            if(x == n){
                return true;
            }
        }
        return false;
        */
    }

    bool add(int n){
        if(!hasValue(n)){
            tableau.push_back(n);
            verif_uniq[n] = true;
            return true;
            //Si on n'a pas n, on l'ajoute au tableau et on la note comme valeur unique avec true.
        }
        return false;
    }

    bool remove(int n){
        //Il faut un itérateur plutôt que n. Les itérateurs sont de type "auto". find() est un algorithme.
        auto ite = find(tableau.begin(), tableau.end(), n);
        //find utilise un point de début (ici 0) et de fin (ici "-1") pour rechercher une valeur n.

        if(hasValue(n)){
            tableau.erase(ite);
            verif_uniq.erase(n);
            return true;
            //Si on a n, on le détruit dans les deux tableaux.
        }
        return false;
    }

    void print(){
        for(int x : tableau){
            cout << x << "  ";
        }
        cout << "\n";
    }
};



int main(void){
    Unique test({5, 99, 99, 12, 6, -81, 14754, 5, 66});
    test.print();

    if(test.hasValue(100)){
        cout << "On a bien 100.\n";
    }
    else{
        cout << "On n'a pas 100\n";
    }
    
    if(test.hasValue(99)){
        cout << "On a bien 99.\n";
    }
    else{
        cout << "On n'a pas 99.\n";
    }

    test.add(67);
    test.remove(67); //Remove ne fonctionne pas ATM
    test.add(68);

    test.print();

    cout << "Dernier test:\n";
    Unique yeehaw;
    yeehaw.add(5);
    yeehaw.add(5);
    yeehaw.print();
    yeehaw.add(10), yeehaw.add(11);
    yeehaw.remove(5);
    yeehaw.print();

    return 0;
}