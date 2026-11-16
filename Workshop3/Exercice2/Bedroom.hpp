#include <iostream>
#include <string>
#pragma once

#include "Room.hpp"

class Bedroom : public Room{
private:
    int nb_beds;
public:
    Bedroom();
    void setnb_beds(int nouv_beds);
    bool isBedroom() override;
};