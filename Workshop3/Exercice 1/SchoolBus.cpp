#include <iostream>
#include <string>
#include "SchoolBus.hpp"

SchoolBus::SchoolBus(std::string sn) : school_name(sn){
    countbigbus += 1;
    /*
    school_name = sn;
    */
}
//Etant donné que SchoolBus est la classe "la plus bas", elle devrait pouvoir utiliser un constructeur spécifique.

void SchoolBus::setSchoolName(std::string nouveau_SchoolName){
    school_name = nouveau_SchoolName;
}

std::string SchoolBus::getSchoolName(){
    return school_name;
}