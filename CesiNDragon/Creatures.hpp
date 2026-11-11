#include <iostream>
#include <string>
#include <random>
#pragma once

class Creatures{
private:
    std::string name;
    int HP;
    int AP;
    int Lvl;

public:
    Creatures(std::string name, int Life, int Power, int Level);
    Creatures(const Creatures &c); //Chaque créature copiée incrémente nbrCreatures. La création propre d'une créature aussi.
    ~Creatures();  //Chaque créature détruite décrémente nbrCreatures.
    std::string affiche();
    double attaque();
    double subitDegat(double degat);
    bool estVivant();

    static int nbrCreatures;
};