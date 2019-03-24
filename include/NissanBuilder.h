/* NissanBuilder.h */

#ifndef NISSANBUILDER
#define NISSANBUILDER
#include <iostream>
#include "Car.h"
#include "CarBuilder.h"
#include <map>

using namespace std;

class NissanBuilder:public CarBuilder
{
    public:
    NissanBuilder();
    virtual ~NissanBuilder();
    
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

#endif //NISSANBUILDER