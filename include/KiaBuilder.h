/* KiaBuilder.h */

#ifndef KIABUILDER
#define KIABUILDER
#include <iostream>
#include "Car.h"
#include "CarBuilder.h"
#include <map>

using namespace std;

class KiaBuilder:public CarBuilder
{
    public:
    KiaBuilder();
    virtual ~KiaBuilder();
    
    void buildColor(string color);
    void buildEngine(string type);
    void buildCapacity(string volume);
    void buildDimentions(string dimentions);
    void buildYear(string year);
    void buildDoors(string doors);
    void buildModel(string model);
    void buildWheels(string wheels);
    void buildTrunk(string trunk);
    void buildAdd(bool isAdd);
};

#endif //KIABUILDER