#include <iostream>

#include "Moto.hpp"

Moto::Moto() : typeVehicule("Moto"){}

void Moto::lavage(){
    std::cout << typeVehicule << " lavée!\n";
}