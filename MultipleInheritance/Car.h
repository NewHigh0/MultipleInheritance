#pragma once
#include <iostream>
#include "Engine.h"
#include "Wheels.h"
#include "Doors.h"

class Car : public virtual Engine, public virtual Wheels, public virtual Doors {
private:
    std::string brand;
    std::string model;
    int year;
    std::string color;

public:
    Car(std::string br = "Toyota",
        std::string mdl = "Camry",
        int yr = 2024,
        std::string clr = "Black",
        double engineVol = 2.5,
        std::string fuelType = "Petrol",
        int hp = 180,
        double wheelSize = 18.0,
        int doorCount = 4)
        : Engine(engineVol, fuelType, hp),
        Wheels(4, wheelSize),
        Doors(doorCount),
        brand(br),
        model(mdl),
        year(yr),
        color(clr) {}

    std::string getBrand() const { return brand; }
    std::string getModel() const { return model; }
    int getYear() const { return year; }
    std::string getColor() const { return color; }

    void setBrand(std::string br) { brand = br; }
    void setModel(std::string mdl) { model = mdl; }
    void setYear(int yr) { year = yr; }
    void setColor(std::string clr) { color = clr; }

    void displayStatus() const {
        std::cout << "\n" << brand << " " << model << " " << year << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Engine: " << getVolume() << "L " << getFuelType()
            << " (" << getHorsePower() << " HP)" << std::endl;
        std::cout << "Engine Status: " << (getStatus() ? "Running" : "Stopped") << std::endl;
        std::cout << "Wheels: " << getWheelSize() << "\" " << getTyreBrand()
            << (getAlloyStatus() ? " Alloy" : " Steel") << std::endl;
        std::cout << "Doors: " << getDoorCount() << " doors, "
            << (getLockStatus() ? "Locked" : "Unlocked") << std::endl;
        std::cout << "Keyless Entry: " << (getKeylessStatus() ? "Yes" : "No") << std::endl;
    }
};