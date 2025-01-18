#pragma once

class Square {
protected:
    double side;

public:
    Square(double s = 0) : side(s) {}

    double getSide() const { return side; }
    void setSide(double s) { side = s; }

    double getArea() const { return side * side; }
    double getPerimeter() const { return 4 * side; }
};
