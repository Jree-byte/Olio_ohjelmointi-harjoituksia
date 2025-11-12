#include <iostream>
#include <memory>
#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

int main() {
    // Car-olio
    Car car;
    car.setBrand("Mercedes-Benz");
    car.setModel("C63 AMG");
    car.setYearModel(2018);
    car.printData();

    // Rectangle-olio
    Rectangle* rect = new Rectangle();
    rect->setWidth(7.0);
    rect->setHeight(4.0);
    std::cout << "Rectangle area: " << rect->getArea() << "\n";
    std::cout << "Rectangle circumference: " << rect->getCircum() << "\n";
    delete rect;

    // Student-olio smart pointerilla
    std::shared_ptr<Student> student = std::make_shared<Student>();
    student->setName("Aliisa Alistaja");
    student->setStudentNumber(12345234);
    student->setAverage(3.5);

    std::cout << "Student name: " << student->getName() << "\n";
    std::cout << "Student number: " << student->getStudentNumber() << "\n";
    std::cout << "Student average: " << student->getAverage() << "\n";

    return 0;
}
