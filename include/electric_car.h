//
// Created by wysockir on 02.09.2024.
//

#ifndef ELECTRIC_CAR_H
#define ELECTRIC_CAR_H

#include "car.h"
#include "vehicle_registry.h"

class ElectricCar : public Car, public VehicleRegistry {
private:
    int batteryLevel;

public:
    ElectricCar(const std::string& n, int d);
    void chargeBattery();
};

#endif // ELECTRIC_CAR_H