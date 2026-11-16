#include <iostream>
#include <string>
#pragma once

#include "Vehicule.hpp"

class Bus : public Vehicule{
private:
    //Il y a également les attributs de Vehicule. Il sont inclus directement sans aucune étape au delà de ci-dessus.
    int seat_capacity;

public:
    Bus(); //Aussi un constructeur par défaut.
    void setseating_capacity(int nouveau_seat_capacity);
    int getseating_capacity();
    void get_info();
};