/* VazBuilder.cpp */

#include <iostream>
#include "VazBuilder.h"

using namespace std;

VazBuilder::VazBuilder(){
    car = new Car("Vaz");
}

VazBuilder::~VazBuilder(){
    delete car;
}

void VazBuilder::buildColor(string color){
    car->setPart("color", color);
}
   
void VazBuilder::buildEngine(string type){
    car->setPart("engine", type);
}

void VazBuilder::buildCapacity(string volume){
    car->setPart("capacity", volume);
}

void VazBuilder::buildDimentions(string dimentions){
    car->setPart("dimentions", dimentions);
}

void VazBuilder::buildYear(string year){
    car->setPart("year", year);
}

void VazBuilder::buildDoors(string doors){
    car->setPart("doors", doors);
}

void VazBuilder::buildModel(string model){
    car->setPart("model", model);
}

void VazBuilder::buildWheels(string wheels){
    car->setPart("wheels", wheels);
}

void VazBuilder::buildTrunk(string trunk){
    car->setPart("trunk", trunk);
}

void VazBuilder::buildAdd(bool isAdd){
    if (isAdd)
        car->setPart("add", "extra trunk");
    else
        car->setPart("add", "none");
}