#include <iostream>
#include <string>
#include "Vehicule.hpp"

//Classe commune, de "base" en haut de l'héritage.

//C'est la "liste d'initialisation".
Vehicule::Vehicule() : max_speed(240), mileage(0){
    /*
    this->max_speed = 240;
    this->mileage = 0;
    //Il y aura des erreurs si on fait comme ça, donc il faut utiliser des membres.
    */
}

void Vehicule::setmax_speed(int nouvelle_vitesse){
    if(nouvelle_vitesse < 200){
        nouvelle_vitesse = 240;
    }
    max_speed = nouvelle_vitesse;
}

int Vehicule::getmax_speed(){
    std::cout << "La vitesse max de l'engin est: " << max_speed << ".\n";
    return max_speed;
}

void Vehicule::setmileage(int nouveau_mileage){
    if(nouveau_mileage < 0){
        nouveau_mileage = 0;
    }
    mileage = nouveau_mileage;
}

int Vehicule::getmileage(){
    std::cout << "Le mileage de l'engin est: " << mileage << ".\n";
    return mileage;
}