#include "Vehicle.hpp"

Vehicle::Vehicle(const std::string& brand, int year, double mileage)
    : brand(brand), year(year), mileage(mileage) {}

std::string Vehicle::getInfo() const {
    return "Brand: " + brand + ", Year: " + std::to_string(year) + ", Mileage: " + std::to_string(mileage) + " km";
}