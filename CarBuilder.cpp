/* CarBuilder.cpp */

#include <iostream>
#include "include/Car.h"
#include "include/CarBuilder.h"
using namespace std;

Car* CarBuilder::getCar(){
    return this->car;
}

