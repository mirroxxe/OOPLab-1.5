#include <iostream>
#include "AlcoholContainer.h"

AlcoholContainer::AlcoholContainer() : liquid(), strength(0.0) {}

AlcoholContainer::AlcoholContainer(const std::string& liquidName, double liquidDensity, double s)
    : liquid(liquidName, liquidDensity), strength(s) {}

Liquid AlcoholContainer::getLiquid() const {
    return liquid;
}

double AlcoholContainer::getStrength() const {
    return strength;
}

void AlcoholContainer::setStrength(double newStrength) {
    strength = newStrength;
}

void AlcoholContainer::Read() {
    std::string liquidName;
    double liquidDensity;

    std::cout << "Enter alcohol name: ";
    std::getline(std::cin, liquidName);

    std::cout << "Enter alcohol density: ";
    std::cin >> liquidDensity;
    std::cin.ignore(); 

    liquid = Liquid(liquidName, liquidDensity);

    std::cout << "Enter alcohol strength: ";
    std::cin >> strength;
}

int AlcoholContainer::Int() {
    return static_cast<int>(strength);
}

void AlcoholContainer::Display() const {
    std::cout << "Alcohol: " << liquid.getName() << ", Density: " << liquid.getDensity()
        << ", Strength: " << strength << "%" << std::endl;
}