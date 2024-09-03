//
// Created by wysockir on 02.09.2024.
//

#include "../include/vehicle.h"
#include <iostream>

int Vehicle::totalVehicles = 0;

Vehicle::Vehicle(const std::string &n) : name(n), isRunning(false) {}

void Vehicle::start() {
    isRunning = true;
    std::cout << name << " started." << std::endl;
}

void Vehicle::stop() {
    isRunning = false;
    std::cout << name << " stopped." << std::endl;
}

int Vehicle::getTotalVehicles() {
    return totalVehicles;
}