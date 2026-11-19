#include <iostream>

#include "Saxophone.hpp"

Saxophone::Saxophone() : music("https://youtu.be/qft8es8bG4I?si=XUx7A29tIHBYNfgQ"){}

std::string Saxophone::play(){
    return ("Votre morceau: " + music);
}