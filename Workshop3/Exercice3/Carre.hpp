#include <iostream>
#pragma once

#include "Objet.hpp"

class Carre : public Objet{
private:
    double cote;
public:
    Carre(double c);
    double getCote();
    double aire() override;
    double perimetre() override;
    void afficherInfo() override;
};