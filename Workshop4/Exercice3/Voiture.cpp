#include <iostream>

#include "Voiture.hpp"

Voiture::Voiture() : typeVehicule("Voiture"){}

void Voiture::lavage(){
    std::cout << typeVehicule << " lavée!\n";
}