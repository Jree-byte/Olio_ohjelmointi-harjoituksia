#include "Car.h"

void Car::setBrand(const std::string& b) {
    brand = b;
}

void Car::setModel(const std::string& m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}

void Car::printData() const {
    std::cout << "Brand: " << brand << "\n"
              << "Model: " << model << "\n"
              << "Year: " << yearModel << "\n";
}
