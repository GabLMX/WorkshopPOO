#include <iostream>
#pragma once

#include "StationLavage.hpp"

class Voiture : public StationLavage{
private:
    std::string typeVehicule;
public:
    Voiture();
    void lavage() override;
};