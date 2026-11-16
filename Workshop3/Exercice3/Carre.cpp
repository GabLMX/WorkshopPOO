#include <iostream>

#include "Carre.hpp"

Carre::Carre(double c) : cote(c){}

double Carre::getCote(){
    return cote;
}

double Carre::aire(){
    return (cote*cote);
}

double Carre::perimetre(){
    return (cote*4);
}

void Carre::afficherInfo(){
    std::cout << "Notre carré a un côté de: " << cote
    << " avec une aire de " << aire() << ", un périmetre de " << perimetre() << ".\n";
}