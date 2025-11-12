#include "Car.h"

Car::Car(const std::string& b, const std::string& m, int y)
    : brand(b), model(m), yearModel(y) {}

void Car::printData() const {
    std::cout << "Brand: " << brand
              << ", Model: " << model
              << ", Year: " << yearModel << std::endl;
}
