/* ToyotaBuilder.cpp */

#include <iostream>
#include "include/ToyotaBuilder.h"

using namespace std;

ToyotaBuilder::ToyotaBuilder(){
    car = new Car("Toyota");
}

ToyotaBuilder::~ToyotaBuilder(){
    delete car;
}

void ToyotaBuilder::buildColor(string color){
    car->setPart("color", color);
}
   
void ToyotaBuilder::buildEngine(string type){
    car->setPart("engine", type);
}

void ToyotaBuilder::buildCapacity(string volume){
    car->setPart("capacity", volume);
}

void ToyotaBuilder::buildDimentions(string dimentions){
    car->setPart("dimentions", dimentions);
}

void ToyotaBuilder::buildYear(string year){
    car->setPart("year", year);
}

void ToyotaBuilder::buildDoors(string doors){
    car->setPart("doors", doors);
}

void ToyotaBuilder::buildModel(string model){
    car->setPart("model", model);
}

void ToyotaBuilder::buildWheels(string wheels){
    car->setPart("wheels", wheels);
}

void ToyotaBuilder::buildTrunk(string trunk){
    car->setPart("trunk", trunk);
}

void ToyotaBuilder::buildAdd(bool isAdd){
    if (isAdd)
        car->setPart("add", "automatic transmission");
    else
        car->setPart("add", "none");
}