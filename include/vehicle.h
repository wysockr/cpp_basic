//
// Created by wysockir on 02.09.2024.
//

#ifndef VEHICLE_H
#define VEHICLE_H

#include "interfaces/ivehicle.h"
#include <string>

class Vehicle : public IVehicle {
protected:
    std::string name;
    bool isRunning;

public:
    Vehicle(const std::string& n);

    void start() override;
    void stop() override;

    static int getTotalVehicles();

protected:
    static int totalVehicles;
};

#endif // VEHICLE_H