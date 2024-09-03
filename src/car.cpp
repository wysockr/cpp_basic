//
// Created by wysockir on 02.09.2024.
//

#include "../include/car.h"
#include <iostream>

Car::Car(const std::string& n, int d) : Vehicle(n), doors(d) {
    totalVehicles++;
}

void Car::honk() {
    std::cout << name << " honks!" << std::endl;
}