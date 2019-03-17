/* CarBuilder.cpp */

#include <iostream>
#include "Car.h"
#include "CarBuilder.h"
using namespace std;

Car* CarBuilder::getCar(){
    return this->car;
}

