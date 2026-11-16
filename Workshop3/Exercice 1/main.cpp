#include <iostream>
#include <string>

#include "Vehicule.hpp"
#include "Bus.hpp"
#include "SchoolBus.hpp"

int main(void){
    SchoolBus classe1("écoleA");
    SchoolBus classe2("écoleBc");
    classe1.setseating_capacity(44);
    classe2.setseating_capacity(18);
    classe1.setmax_speed(220);
    classe2.setmax_speed(230);
    classe1.setmileage(50327);
    classe2.setmileage(158911);

    classe1.get_info();
    classe2.get_info();
    
    return 0;
}