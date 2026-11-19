#include <iostream>
#pragma once

#include "Instrument.hpp"

class Piano : public Instrument{
private:
    std::string music;
public:
    Piano();
    std::string play() override;
};