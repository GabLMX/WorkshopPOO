#include <iostream>
#include <string>
#pragma once

#include "Bus.hpp"

class SchoolBus : public Bus{
private:
    std::string school_name;

public:
    SchoolBus(std::string sn);
    SchoolBus(const SchoolBus &s);
    ~SchoolBus();
    void setSchoolName(std::string nouveauSchoolName);
    std::string getSchoolName();
};