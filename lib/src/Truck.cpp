#include "Truck.hpp"

Truck::Truck(const std::string& brand, int year, double mileage, double loadCapacityKg)
    : Vehicle(brand, year, mileage), loadCapacityKg(loadCapacityKg) {}

std::string Truck::getInfo() const {
    return "Truck -> " + Vehicle::getInfo() + ", Load Capacity: " + std::to_string(loadCapacityKg) + " kg";
}