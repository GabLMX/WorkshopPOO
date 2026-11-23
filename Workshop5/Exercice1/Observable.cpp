#include <iostream>

#include "Observable.hpp"

Observable::Observable() : observers(nullptr), index(0){}

int Observable::subscribe(Observers* obs){
    //Pas de vérification si la personne est déjà abonnée.
    observers[index] = obs;
    index += 1;
    return index;
}

int Observable::unsubscribe(Observers* obs){
    for(int i = 0; i < index; i++){
        if(observers[i] == obs){
            observers[i] = nullptr;
            index -= 1;
            break;
        }
    }
    return index;
}

void Observable::notify(){
    for(int i = 0; i < index; i++){
        observers[i]->update(this);
    }
}