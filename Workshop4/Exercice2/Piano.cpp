#include <iostream>

#include "Piano.hpp"

Piano::Piano() : music("https://youtu.be/n4JD-3-UAzM?si=J4reK1qXY7m1LZKT"){}

std::string Piano::play(){
    return ("Votre morceau de piano: " + music);
}