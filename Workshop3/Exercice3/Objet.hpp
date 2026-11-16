#include <iostream>
#pragma once

class Objet{
public:
    virtual double aire() = 0;
    virtual double perimetre() = 0;
    virtual void afficherInfo() = 0;
};