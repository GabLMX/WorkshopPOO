#include <iostream>
#pragma once

class Voiture{
private:
    int vitesseMax;
    int vitesse;
    int acceleration;
    static int nbrVoiture;
public:
    Voiture();
    Voiture(int vMax, int accel);
    void setAttrib(int vMax, int accel);
    int accelerer();
};