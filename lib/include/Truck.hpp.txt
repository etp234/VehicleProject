#pragma once
#include "Vehicle.hpp"

class Truck : public Vehicle {
private:
    double loadCapacityKg;

public:
    Truck(const std::string& brand, int year, double mileage, double loadCapacityKg);
    std::string getInfo() const override;
};