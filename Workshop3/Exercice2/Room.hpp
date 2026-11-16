#include <iostream>
#include <string>
#pragma once

#include "Bedroom.hpp"
#include "Bathroom.hpp"

class Room{
private:
    int nb_windows;
    std::string color;
    bool bedroom;
    bool bathroom;
public:
    Room();
    int getnbr_windows();
    void setnbr_windows(int nouv_windows);
    std::string getcolor();
    void setcolor(std::string nouv_color);
    virtual bool isBedroom();
    virtual bool isBathroom();
};