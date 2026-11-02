#include "Car.hpp"

Car::Car(const std::string& brand, int year, double mileage, int doorsCount)
    : Vehicle(brand, year, mileage), doorsCount(doorsCount) {}

std::string Car::getInfo() const {
    return "Car -> " + Vehicle::getInfo() + ", Doors: " + std::to_string(doorsCount);
}