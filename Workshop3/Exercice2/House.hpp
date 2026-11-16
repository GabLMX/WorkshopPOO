#include <iostream>
#include <string>
#pragma once

#include "Room.hpp"

class House{
private:
    int nb_pieces;
    //std::string pieces[nb_pieces];
public:
    House(int nb_pieces);
    int getNbrOfBathroom();
    int getNbrOfBedroom();
};