#include <iostream>
#pragma once

#include "Instrument.hpp"

class Saxophone : public Instrument{
private:
    std::string music;
public:
    Saxophone();
    std::string play() override;
};