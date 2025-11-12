#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    // Konstruktori
    Car(const std::string& b, const std::string& m, int y);

    // Metodi tietojen tulostamiseen
    void printData() const;
};

#endif
