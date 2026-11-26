#include <iostream>
#include <vector>

using namespace std; //Pas nécessaire mais bon.

//"g++ Exercice1.cpp -o main" puis "./main"

void tri_insertion(vector<int> &tableau, int size_tab){
    int val;
    int j;
    for(int i = 1; i < size_tab; i++){
        val = tableau[i];
        j = i;
        
        while(j > 0 && tableau[j - 1] > val){
            tableau[j] = tableau[j - 1];
            j = j - 1;
        }

        tableau[j] = val;
    }
}

int main(void){
    vector<int> tbl = {5, 7, 11, 19};
    vector<int> scrambled = {11, 5, 19, 7};

    for(int x : tbl){
        cout << x << "\n";
    }

    tri_insertion(scrambled, scrambled.size());
    //On n'envoie pas l'adresse de scrambled même si la fonction reçoit l'adresse.

    cout << "V2:" << "\n";
    for(int x : scrambled){
        cout << x << "\n";
    }

    for(int i = 0; i < tbl.size(); i++){
        if(tbl[i] != scrambled[i]){
            cout << "Erreur!\n";
        }
    }
    cout << "C'est bien trié.\n";

    return 0;
}