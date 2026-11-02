#pragma once
#include <string>

class Vehicle {
protected:
    std::string brand;
    int year;
    double mileage;

public:
    Vehicle(const std::string& brand, int year, double mileage);
    virtual ~Vehicle() = default;

    virtual std::string getInfo() const;
};