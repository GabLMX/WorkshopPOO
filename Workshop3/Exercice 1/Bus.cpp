#include <iostream>
#include <string>
#include "Bus.hpp"

Bus::Bus() : seat_capacity(10){
    /*
    this->seat_capacity = 10;
    */
}
//Par défaut, on a l'équivalent de "Bus::Bus() : Vehicule(), seat_capacity(10){}" par défaut.

void Bus::setseating_capacity(int nouveau_seat_capacity){
    if(nouveau_seat_capacity < 10 or nouveau_seat_capacity > 50){
        nouveau_seat_capacity = 50;
    }
    seat_capacity = nouveau_seat_capacity;
}

int Bus::getseating_capacity(){
    std::cout << "La capacité du bus est: " << seat_capacity << ".\n";
    return seat_capacity;
}

void Bus::get_info(){
    std::cout << "Il s'agit d'un bus de capacité " << seat_capacity << ", avec une vitesse maximale de " <<
    getmax_speed() << " km/h et son kilométrage est de " << getmileage() << ".\n";
}
//Les attributs hérités de la classe Vehicule doivent être obtenus par des getters, car ils sont privés.
//Sinon on peut utiliser des protecteurs.