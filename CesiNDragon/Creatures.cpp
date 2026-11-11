#include "Creatures.hpp"
#include <iostream>
#include <cmath>

int Creatures::nbrCreatures = 0;

Creatures::Creatures(std::string name, int Life, int Power, int Level){
    this->name = name;
    HP = Life;
    AP = Power;
    Lvl = Level;
    nbrCreatures += 1;
}

Creatures::Creatures(const Creatures &c){
    nbrCreatures += 1;
}

Creatures::~Creatures(){
    nbrCreatures -= 1;
}

std::string Creatures::affiche(){
    return "Your foe is " + name + ", with a power of " + std::to_string(AP) +
    " and a life of " + std::to_string(HP) + ". Its level is: " + std::to_string(Lvl);
}

double Creatures::attaque(){
    double formula = (AP*(std::log(pow(Lvl, 0.15))));
    int resultat = static_cast<int>(std::round(formula));
    std::cout << name << " attacks and has inflicted " << resultat << " damage!" << "(" << formula << " pre-rounding)" << "\n";
    return resultat;
}

double Creatures::subitDegat(double degat){
    HP = HP - degat;
    std::cout << "Monster's remaining Health Points: " << HP << "\n";
    return HP;
}

bool Creatures::estVivant(){
    return HP>0;
}