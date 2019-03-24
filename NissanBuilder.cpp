/* NissanBuilder.cpp */

#include <iostream>
#include "include/NissanBuilder.h"

using namespace std;

NissanBuilder::NissanBuilder(){
    car = new Car("Nissan");
}

NissanBuilder::~NissanBuilder(){
    delete car;
}

void NissanBuilder::buildColor(string color){
    car->setPart("color", color);
}
   
void NissanBuilder::buildEngine(string type){
    car->setPart("engine", type);
}

void NissanBuilder::buildCapacity(string volume){
    car->setPart("capacity", volume);
}

void NissanBuilder::buildDimentions(string dimentions){
    car->setPart("dimentions", dimentions);
}

void NissanBuilder::buildYear(string year){
    car->setPart("year", year);
}

void NissanBuilder::buildDoors(string doors){
    car->setPart("doors", doors);
}

void NissanBuilder::buildModel(string model){
    car->setPart("model", model);
}

void NissanBuilder::buildWheels(string wheels){
    car->setPart("wheels", wheels);
}

void NissanBuilder::buildTrunk(string trunk){
    car->setPart("trunk", trunk);
}

void NissanBuilder::buildAdd(int isAdd){
    if (isAdd== 1)
        car->setPart("add", "heated seats");
    else
        car->setPart("add", "none");
}