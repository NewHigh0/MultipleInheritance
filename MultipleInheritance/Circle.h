#pragma once

class Circle {
protected:
    double radius;
    const double PI = 3.14;

public:
    Circle(double r = 0) : radius(r) {}

    double getRadius() const { return radius; }
    void setRadius(double r) { radius = r; }

    double getArea() const { return PI * radius * radius; }
    double getPerimeter() const { return 2 * PI * radius; }
};
