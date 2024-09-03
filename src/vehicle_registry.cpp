//
// Created by wysockir on 02.09.2024.
//

#include "../include/vehicle_registry.h"
#include <iostream>

int VehicleRegistry::registeredVehicles = 0;

void VehicleRegistry::registerVehicle(const std::string &name) {
    registeredVehicles++;
    std::cout << name << " registered. Total: " << registeredVehicles << std::endl;
}

int VehicleRegistry::getRegisteredVehicles() {
    return registeredVehicles;
}
