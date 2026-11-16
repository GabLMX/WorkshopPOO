#include <iostream>
#include <string>

#include "Room.hpp"

Room::Room() : nb_windows(0), color("Blanc"), bedroom(false), bathroom(false){}

int Room::getnbr_windows(){
    return nb_windows;
}

void Room::setnbr_windows(int nouv_windows){
    nb_windows = nouv_windows;
}

std::string Room::getcolor(){
    return color;
}

void Room::setcolor(std::string nouv_color){
    color = nouv_color;
}

bool Room::isBedroom(){
    return false;
}

bool Room::isBathroom(){
    return false;
}