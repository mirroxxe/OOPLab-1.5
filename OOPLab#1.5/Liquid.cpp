#include "Liquid.h"
#include <iostream>

Liquid::Liquid() : name(""), density(0.0) {}

Liquid::Liquid(const std::string& n, double d) : name(n), density(d) {}

std::string Liquid::getName() const {
    return name;
}

double Liquid::getDensity() const {
    return density;
}

void Liquid::setDensity(double newDensity) {
    density = newDensity;
}

void Liquid::Read() {
    std::cout << "Enter liquid name: ";
    std::getline(std::cin, name);

    std::cout << "Enter liquid density: ";
    std::cin >> density;
    std::cin.ignore(); 
}

int Liquid::Int() {
    return static_cast<int>(density);
}

void Liquid::Display() const {
    std::cout << "Liquid: " << name << ", Density: " << density << std::endl;
}
