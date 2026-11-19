#include <iostream>
#pragma once

class VoitureDeSport{
private:
    int vitesseMax;
    int vitesse;
    int acceleration;
    static int nbrVoitureSport;
public:
    VoitureDeSport();
    VoitureDeSport(int vMax, int accel);
    void setAttrib(int vMax, int accel);
    int accelerer();
    bool isSport();
};
//Il serait possible de transformer Voiture en classe parente à VoituredeSport,
//où remplir certaines conditions permettraient d'avoir une Voiture qui devient une VoituredeSport.
//Dans un tel cas, on aurait Voiture avec des virtual et VoitureDeSport avec des override.