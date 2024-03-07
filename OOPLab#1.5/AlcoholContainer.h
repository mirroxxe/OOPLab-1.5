#pragma once
#ifndef ALCOHOLCONTAINER_H
#define ALCOHOLCONTAINER_H

#include "Liquid.h"

class AlcoholContainer {
private:
    Liquid liquid;
    double strength;

public:
    AlcoholContainer(); 
    AlcoholContainer(const std::string& liquidName, double liquidDensity, double s);
    Liquid getLiquid() const;
    double getStrength() const;
    void setStrength(double newStrength);

    void Read();
    int Int();
    void Display() const;
};

#endif
