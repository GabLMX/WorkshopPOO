#include <iostream>

#include "VoitureDeSport.hpp"

int VoitureDeSport::nbrVoitureSport = 0;

VoitureDeSport::VoitureDeSport() : vitesseMax(200), vitesse(0), acceleration(8){
    nbrVoitureSport += 1;
}

VoitureDeSport::VoitureDeSport(int vMax, int accel) : vitesseMax(vMax), vitesse(0), acceleration(accel){
    if(vMax > 200){
        vitesseMax = 200;
    }
    if(accel > 8){
        acceleration = 8;
    }
    nbrVoitureSport += 1;
}

void VoitureDeSport::setAttrib(int vMax, int accel){
    if(vMax < 200){
        vitesseMax = vMax;
    }
    else{
        vitesseMax = 200;
    }
    if(accel < 8){
        acceleration = accel;
    }
    else{
        acceleration = 8;
    }
}

int VoitureDeSport::accelerer(){
    if((vitesse + acceleration) < 200){
        vitesse += acceleration;
    }
    else{
        vitesse = 200;
    }
    return vitesse;
}

bool VoitureDeSport::isSport(){
    return ((vitesseMax > 100) || (acceleration > 3));
}