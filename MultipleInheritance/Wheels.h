#pragma once
#include <string>

class Engine {
protected:
    double volume;
    std::string fuelType;
    bool isRunning;
    int horsePower;

public:
    Engine(double vol = 2.0, std::string fuel = "Petrol", int hp = 150)
        : volume(vol), fuelType(fuel), isRunning(false), horsePower(hp) {}

    void start() { isRunning = true; }
    void stop() { isRunning = false; }
    bool getStatus() const { return isRunning; }

    double getVolume() const { return volume; }
    std::string getFuelType() const { return fuelType; }
    int getHorsePower() const { return horsePower; }

    void setVolume(double vol) { volume = vol; }
    void setFuelType(std::string fuel) { fuelType = fuel; }
    void setHorsePower(int hp) { horsePower = hp; }
};