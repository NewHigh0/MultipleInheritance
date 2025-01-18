#include <iostream>
#include "CircleInSquare.h"

int main() {
    CircleInSquare figure(10);

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

    return 0;
}