// main.cpp

#include <iostream>
#include "Liquid.h"
#include "AlcoholContainer.h"

int main() {
    // Введення даних для об'єкта рідини
    Liquid liquid;
    liquid.Read();

    // Введення даних для об'єкта контейнера спирту
    AlcoholContainer alcoholContainer;
    alcoholContainer.Read();

    // Виведення інформації про об'єкти
    std::cout << "\nDetails of the liquid:\n";
    liquid.Display();

    std::cout << "\nDetails of the alcohol container:\n";
    alcoholContainer.Display();

    return 0;
}
