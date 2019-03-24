/* Constructor.cpp */

#include <iostream>
#include "include/Constructor.h"
using namespace std;

void Constructor::Construct(CarBuilder* carBuilder){
    carBuilder->buildColor();
    carBuilder->buildEngine();
    carBuilder->buildCapacity();
    carBuilder->buildDimentions();
    carBuilder->buildYear();
    carBuilder->buildDoors();
    carBuilder->buildModel();
    carBuilder->buildWheels();
    carBuilder->buildThrunk();
    carBuilder->buildAdd();
}


