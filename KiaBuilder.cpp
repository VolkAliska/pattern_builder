/* KiaBuilder.cpp */

#include <iostream>
#include "include/KiaBuilder.h"

using namespace std;

KiaBuilder::KiaBuilder(){
    car = new Car("Kia");
}

KiaBuilder::~KiaBuilder(){
    delete car;
}

void KiaBuilder::buildColor(string color){
    car->setPart("color", color);
}
   
void KiaBuilder::buildEngine(string type){
    car->setPart("engine", type);
}

void KiaBuilder::buildCapacity(string volume){
    car->setPart("capacity", volume);
}

void KiaBuilder::buildDimentions(string dimentions){
    car->setPart("dimentions", dimentions);
}

void KiaBuilder::buildYear(string year){
    car->setPart("year", year);
}

void KiaBuilder::buildDoors(string doors){
    car->setPart("doors", doors);
}

void KiaBuilder::buildModel(string model){
    car->setPart("model", model);
}

void KiaBuilder::buildWheels(string wheels){
    car->setPart("wheels", wheels);
}

void KiaBuilder::buildTrunk(string trunk){
    car->setPart("trunk", trunk);
}

void KiaBuilder::buildAdd(int isAdd){
    if (isAdd == 1)
        car->setPart("add", "heated mirrors");
    else
        car->setPart("add", "none");
}