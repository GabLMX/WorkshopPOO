#include <iostream>
#include <string>
#include <random>
#pragma once

class Heroes{
private:
    std::string name;
    int HP;
    int AP;
    int Lvl;

public:
    Heroes(std::string name, int Life, int Power, int Level);
    std::string affiche();
    double attaque();
    double subitDegat(double degat);
    bool estVivant();
};