/*Car.cpp*/

#include <iostream>
#include "include/Car.h"

using namespace std;

Car::Car(string type){
	this->carType = type;
}

// TO DO
Car::~Car(){
    cout << "delete car" << endl;
}

bool Car::isPartExist(string key){
    if (parts.find(key) != parts.end())
        return true;
    return false;
}

void Car::setPart(string key, string value){
    parts[key] = value;
}

string Car::getPart(string key){
    if(!isPartExist(key))
        throw "No such key";
    return parts[key];
}

void Car::show(){
    cout<<"\n___________\n";
    cout << "type: " << this->carType << endl;
    cout << "color: " << parts["color"] << endl;
    cout << "engine type: " << parts["engine"] << endl;
    cout << "engine capacity: " << parts["capacity"] << endl;
    cout << "dimentions: " << parts["dimentions"] << endl;
    cout << "year: " << parts["year"] << endl;
    cout << "doors: " << parts["doors"] << endl;
    cout << "model: " << parts["model"] << endl;
    cout << "wheels: " << parts["wheels"] << endl;
    cout << "trunk: " << parts["trunk"] << endl;
    cout << "additional: " << parts["add"] << endl;
}