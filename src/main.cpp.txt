#include <iostream>
#include <vector>
#include <memory>
#include "Vehicle.hpp"
#include "Car.hpp"
#include "Truck.hpp"

int main() {
    std::cout << "=== Vehicle Library Demonstration ===\n\n";

    std::vector<std::unique_ptr<Vehicle>> fleet;
    fleet.push_back(std::make_unique<Car>("BMW M5", 2022, 15000.0, 4));
    fleet.push_back(std::make_unique<Truck>("Volvo FH16", 2020, 250000.0, 20000.0));

    for (const auto& vehicle : fleet) {
        std::cout << vehicle->getInfo() << "\n";
    }

    return 0;
}