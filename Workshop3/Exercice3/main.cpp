#include <iostream>

#include "Rectangle.hpp"
#include "Carre.hpp"

int main(void){
    Rectangle testRect(11, 2);
    Carre testCar(7);

    testRect.afficherInfo();
    testCar.afficherInfo();
    
    return 0;
}