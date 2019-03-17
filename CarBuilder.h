/* CarBuilder.h */

#ifndef CARBUILDER
#define CARBUILDER
#include <iostream>
#include "Car.h"
#include <map>

using namespace std;

class CarBuilder
{
    protected:
    Car* car;

    public:
    CarBuilder();
    virtual ~CarBuilder();

    Car* getCar();

    virtual void buildColor() = 0;
    virtual void buildEngine() = 0;
    virtual void buildCapacity() = 0;
    virtual void buildDimentions() = 0;
    virtual void buildYear() = 0;
    virtual void buildDoors() = 0;
    virtual void buildModel() = 0;
    virtual void buildWheels() = 0;
    virtual void buildThrunk() = 0;
    virtual void buildAdd() = 0;
};

#endif //CARBUILDER