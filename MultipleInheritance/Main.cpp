#include <iostream>
#include "CircleInSquare.h"
#include "Car.h"
#include "child2.h"

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
    std::cout << "New circle radius: " << figure.getRadius() << std::endl;

    std::cout << std::endl;

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
    customCar.displayStatus();*/

    std::cout << "Testing base class:" << std::endl;
    base<int, double> b(10, 3.14);
    b.display();

    std::cout << "\nTesting child class:" << std::endl;
    child<int, double, std::string, char> c(100, 2.718, "Hello", 'A');
    c.display();

    std::cout << "\nChange child values:" << std::endl;
    c.setValue1(200);
    c.setValue2(3.333);
    c.setValue3("World");
    c.setValue4('B');
    c.display();

    std::cout << "\nTesting child2 class:" << std::endl;
    child2<int, double, std::string, char, bool, float>
        c2(1000, 1.414, "Test", 'X', true, 3.33f);
    c2.display();

    std::cout << "\nChange child2 values: " << std::endl;
    c2.setValue1(2000);
    c2.setValue2(2.828);
    c2.setValue3("Modified");
    c2.setValue4('Y');
    c2.setValue5(false);
    c2.setValue6(6.66f);
    c2.display();

    return 0;
}