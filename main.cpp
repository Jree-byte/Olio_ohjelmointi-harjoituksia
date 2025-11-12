#include <iostream>
#include <vector>
#include "Car.h"

int main() {
    // Vektori Car-olio
    std::vector<Car> carList;

    //Lista
    carList.push_back(Car("Toyota", "Corolla", 2020));
    carList.push_back(Car("Volkswagen", "Golf", 2018));
    carList.push_back(Car("Mercedes-Benz", "C180", 2023));

    // Tulosta listan toisen alkion tiedot
    std::cout << "Toisen auton tiedot:" << std::endl;
    carList[1].printData();

    std::cout << std::endl;

    // Tulosta kaikkien autojen tiedot
    std::cout << "Kaikkien autojen tiedot:" << std::endl;
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
