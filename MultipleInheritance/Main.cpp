#include <iostream>
#include "CircleInSquare.h"
#include "Car.h"

int main() {
    /*CircleInSquare figure(10);

    std::cout << "Square:" << std::endl;
    std::cout << "Side: " << figure.getSide() << std::endl;
    std::cout << "Area: " << figure.Square::getArea() << std::endl;
    std::cout << "Perimeter: " << figure.Square::getPerimeter() << std::endl;

    std::cout << "\nCircle:" << std::endl;
    std::cout << "Radius: " << figure.getRadius() << std::endl;
    std::cout << "Area: " << figure.Circle::getArea() << std::endl;
    std::cout << "Perimeter: " << figure.Circle::getPerimeter() << std::endl;

    std::cout << "\nArea difference: " << figure.getAreaDifference() << std::endl;

    std::cout << "\nChange size:" << std::endl;
    figure.setSide(6);

    std::cout << "New square side: " << figure.getSide() << std::endl;
    std::cout << "New circle radius: " << figure.getRadius() << std::endl;*/

    Car myCar;

    std::cout << "Default car status:";
    myCar.displayStatus();

    myCar.start();
    myCar.unlock();
    myCar.setColor("Red");
    myCar.setWheelSize(19.0);

    std::cout << "\nAfter modifications:";
    myCar.displayStatus();

    Car customCar("BMW", "M5", 2024, "Blue", 4.4, "Petrol", 600, 20.0, 4);

    std::cout << "\nCustom car status:";
    customCar.displayStatus();

    return 0;
}