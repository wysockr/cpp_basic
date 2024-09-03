//
// Created by wysockir on 02.09.2024.
//

#ifndef VEHICLE_REGISTRY_H
#define VEHICLE_REGISTRY_H

#include <string>

class VehicleRegistry {
public:
    static void registerVehicle(const std::string& name);
    static int getRegisteredVehicles();

private:
    static int registeredVehicles;
};

#endif // VEHICLE_REGISTRY_H