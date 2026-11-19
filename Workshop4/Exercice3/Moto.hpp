#include <iostream>
#pragma once

#include "StationLavage.hpp"

class Moto : public StationLavage{
private:
    std::string typeVehicule;
public:
    Moto();
    void lavage() override;
};