/* ToyotaBuilder.h */

#ifndef TOYOTABUILDER
#define TOYOTABUILDER
#include <iostream>
#include "Car.h"
#include "CarBuilder.h"
#include <map>

using namespace std;

class ToyotaBuilder:public CarBuilder
{
    public:
    ToyotaBuilder();
    virtual ~ToyotaBuilder();
    
    void buildColor(string color);
    void buildEngine(string type);
    void buildCapacity(string volume);
    void buildDimentions(string dimentions);
    void buildYear(string year);
    void buildDoors(string doors);
    void buildModel(string model);
    void buildWheels(string wheels);
    void buildTrunk(string trunk);
    void buildAdd(int isAdd);
};

#endif //TOYOTABUILDER