#include <iostream>
#include <string>

#include "Bedroom.hpp"

Bedroom::Bedroom() : nb_beds(1){}

void Bedroom::setnb_beds(int nouv_beds){
    nb_beds = nouv_beds;
}

bool Bedroom::isBedroom(){
    return true;
}