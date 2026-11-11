//All of this has been moved to Cesi & Dragon, go there.

#include <iostream>

class Heroes{
private:
    std::string name;
    int HP;
    int AP;
    int Lvl;

public:
    Heroes(std::string name, int Life, int Power, int Level){
        this->name = name;
        HP = Life;
        AP = Power;
        Lvl = Level;
    }

};

class Creatures{
private:
    std::string name;
    int HP;
    int AP;
    int Lvl;

public:
    Creatures(std::string name, int Life, int Power, int Level){
        this->name = name;
        HP = Life;
        AP = Power;
        Lvl = Level;
    }

};


int main(){
    return 0;
}