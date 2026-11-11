#include "Heroes.hpp"
#include <iostream>
#include <cmath>

Heroes::Heroes(std::string name, int Life, int Power, int Level){
    this->name = name;
    HP = Life;
    AP = Power;
    Lvl = Level;
}

std::string Heroes::affiche(){
    return "You are " + name + ", known for your power of " + std::to_string(AP) +
    " and vitality of " + std::to_string(HP) + ". Your level is: " + std::to_string(Lvl);
}

double Heroes::attaque(){
    double formula = (AP*(std::log(pow(Lvl, 0.2))));
    int resultat = static_cast<int>(std::round(formula));
    std::cout << name << " attacks and has inflicted " << resultat << " damage!" << "(" << formula << " pre-rounding)" << "\n";
    return resultat;
}

double Heroes::subitDegat(double degat){
    HP = HP - degat;
    std::cout << "Your remaining Health Points: " << HP << "\n";
    return HP;
}

bool Heroes::estVivant(){
    return HP>0;
}