//
// Created by wysockir on 02.09.2024.
//

#include "../include/electric_car.h"
#include <iostream>

ElectricCar::ElectricCar(const std::string &n, int d) : Car(n, d), batteryLevel(100) {
    registerVehicle(n);
}

void ElectricCar::chargeBattery() {
    batteryLevel = 100;
    std::cout << name << " battery charged to 100%." << std::endl;
}