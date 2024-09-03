//
// Created by wysockir on 02.09.2024.
//

#ifndef IVEHICLE_H
#define IVEHICLE_H

class IVehicle {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual ~IVehicle() = default;
};

#endif // IVEHICLE_H