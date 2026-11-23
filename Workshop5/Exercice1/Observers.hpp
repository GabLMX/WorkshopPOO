#include <iostream>
#pragma once

//La ligne ci-dessous indique qu'on créera une classe Observable quelque part dans le code pour éviter une erreur maintenant.
//C'est une "déclaration anticipée".
class Observable;

class Observers{
public:
//Où on définit update() ailleurs.
    virtual void update(Observable* observe) = 0;
};