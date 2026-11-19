#include <iostream>

#include "StationLavage.hpp"
#include "Moto.hpp"
#include "Voiture.hpp"

//g++ main.cpp Moto.cpp Voiture.cpp -o main

int main(void){
    StationLavage* v1 = new Voiture;
    StationLavage* v2 = new Voiture;
    StationLavage* v3 = new Moto;

    int nbr_vehicules = 3; //à changer manuellement, malheuresement.
    StationLavage* vehicules[nbr_vehicules] = {v1, v2, v3}; //Il faut des & si on n'utilise pas des pointeurs.
    //Par exemple si v1 et v2 était explicitement des voitures (Voiture v1;) alors on aurait écrit {&v1, &v2, v3}.

    for(int i = 0; i < nbr_vehicules; i++){
        vehicules[i]->lavage();
    }

    std::cout << "\n";
    delete v1;
    v1 = new Moto;

    for(int i = 0; i < nbr_vehicules; i++){
        vehicules[i]->lavage();
    }

    return 0;
}