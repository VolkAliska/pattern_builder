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
    CarBuilder(){};
    virtual ~CarBuilder(){};

    Car* getCar();

    virtual void buildColor(string color) = 0;
    virtual void buildEngine(string type) = 0;
    virtual void buildCapacity(string volume) = 0;
    virtual void buildDimentions(string dimentions) = 0;
    virtual void buildYear(string year) = 0;
    virtual void buildDoors(string doors) = 0;
    virtual void buildModel(string model) = 0;
    virtual void buildWheels(string wheels) = 0;
    virtual void buildTrunk(string trunk) = 0;
    virtual void buildAdd(int isAdd) = 0;
};

#endif //CARBUILDER