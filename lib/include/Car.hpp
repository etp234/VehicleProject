#pragma once
#include "Vehicle.hpp"

class Car : public Vehicle {
private:
    int doorsCount;

public:
    Car(const std::string& brand, int year, double mileage, int doorsCount);
    std::string getInfo() const override;
};