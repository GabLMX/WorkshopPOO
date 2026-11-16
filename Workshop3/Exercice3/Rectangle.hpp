#include <iostream>
#pragma once

#include "Objet.hpp" //Toutes les méthodes d'objet.hpp sont virtuelles, il faut donc les re-définir.

class Rectangle : public Objet{
private:
    double largeur;
    double longueur;
public:
    Rectangle(double la, double lo);
    double getLargeur();
    double getLongueur();
    double aire() override;
    double perimetre() override;
    void afficherInfo() override;
};