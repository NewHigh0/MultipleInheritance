#pragma once
#include <string>

class Wheels {
protected:
    int wheelCount;
    double wheelSize;
    std::string tyreBrand;
    bool isAlloy;

public:
    Wheels(int count = 4, double size = 17.0, std::string brand = "Michelin", bool alloy = true)
        : wheelCount(count), wheelSize(size), tyreBrand(brand), isAlloy(alloy) {}

    int getWheelCount() const { return wheelCount; }
    double getWheelSize() const { return wheelSize; }
    std::string getTyreBrand() const { return tyreBrand; }
    bool getAlloyStatus() const { return isAlloy; }

    void setWheelSize(double size) { wheelSize = size; }
    void setTyreBrand(std::string brand) { tyreBrand = brand; }
    void setAlloyStatus(bool status) { isAlloy = status; }
};