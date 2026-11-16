#include <iostream>
#include <string>
#pragma once

class Vehicule{
private:
    int max_speed;
    int mileage;

public:
    Vehicule(); //C'est un constructeur vide; c'est un constructeur par défaut.
    //C'est nécessaire pour les héritages car on doit construire notre objet.
    void setmax_speed(int nouvelle_vitesse);
    int getmax_speed();
    void setmileage(int nouveau_mileage);
    int getmileage();
};