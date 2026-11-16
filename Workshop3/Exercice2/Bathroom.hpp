#include <iostream>
#include <string>
#pragma once

#include "Room.hpp"

class Bathroom : public Room{
private:
    bool has_shower;
public:
    Bathroom();
    bool isBathroom() override;
};