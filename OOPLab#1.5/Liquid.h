#pragma once
#ifndef LIQUID_H
#define LIQUID_H

#include <string>

class Liquid {
private:
    std::string name;
    double density;

public:
    Liquid(); 
    Liquid(const std::string& n, double d);
    std::string getName() const;
    double getDensity() const;
    void setDensity(double newDensity);

    void Read();
    int Int();
    void Display() const;
};

#endif 
