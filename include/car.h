//
// Created by wysockir on 02.09.2024.
//

#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle {
private:
    int doors;

public:
    Car(const std::string& n, int d);
    void honk();
};

#endif // CAR_H