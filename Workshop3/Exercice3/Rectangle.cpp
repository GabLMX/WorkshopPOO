#include <iostream>

#include"Rectangle.hpp"

Rectangle::Rectangle(double la, double lo) : largeur(la), longueur(lo){}

double Rectangle::getLargeur(){
    return largeur;
}

double Rectangle::getLongueur(){
    return longueur;
}

double Rectangle::aire(){
    return largeur*longueur;
}

double Rectangle::perimetre(){
    return (2 * (largeur * longueur));
}

void Rectangle::afficherInfo(){
    std::cout << "Notre rectangle a une largeur et longueur de: " << largeur << " et " << longueur
    << " avec une aire de " << aire() << ", un périmetre de " << perimetre() << ".\n";
}