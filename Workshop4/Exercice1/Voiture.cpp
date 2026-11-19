#include <iostream>

#include "Voiture.hpp"

int Voiture::nbrVoiture = 0;

Voiture::Voiture() : vitesseMax(100), vitesse(0), acceleration(3){
    nbrVoiture += 1;
}

Voiture::Voiture(int vMax, int accel) : vitesseMax(vMax), vitesse(0), acceleration(accel){
    if(vMax > 100){
        vitesseMax = 100;
    }
    if(accel > 3){
        acceleration = 3;
    }
    nbrVoiture += 1;
}

void Voiture::setAttrib(int vMax, int accel){
    vitesseMax = vMax;
    if(accel > 3){
        acceleration = 3;
    }
    else{
        acceleration = accel;
    }
}

int Voiture::accelerer(){
    if((vitesse + acceleration) < 100){
        vitesse += acceleration;
    }
    else{
        vitesse = 100;
    }
    return vitesse;
}