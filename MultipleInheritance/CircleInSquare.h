#pragma once
#include "Circle.h"
#include "Square.h"

class CircleInSquare : public virtual Circle, public virtual Square {
public:
    CircleInSquare(double side) : Square(side) {
        radius = side / 2;
    }

    void setSide(double s) {
        side = s;
        radius = s / 2;
    }

    void setRadius(double r) {
        radius = r;
        side = r * 2;
    }

    double getAreaDifference() const {
        return Square::getArea() - Circle::getArea();
    }
};
