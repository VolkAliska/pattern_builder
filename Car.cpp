/*Car.cpp*/

#include <iostream>
#include <fstream>
#include "include/Car.h"

using namespace std;

Car::Car(string type){
    cout << "new car has been created" << endl;
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

void Car::save(string filename){
    ofstream fout(filename, ios_base::app);
    if(!fout.is_open()){
        cout << "error open file" << endl;
        return;
    }
    fout<<"\n___________\n";
    fout << "type: " << this->carType << endl;
    fout << "color: " << parts["color"] << endl;
    fout << "engine type: " << parts["engine"] << endl;
    fout << "engine capacity: " << parts["capacity"] << endl;
    fout << "dimentions: " << parts["dimentions"] << endl;
    fout << "year: " << parts["year"] << endl;
    fout << "doors: " << parts["doors"] << endl;
    fout << "model: " << parts["model"] << endl;
    fout << "wheels: " << parts["wheels"] << endl;
    fout << "trunk: " << parts["trunk"] << endl;
    fout << "additional: " << parts["add"] << endl;
    fout.close();
    cout << "Saved to " << filename << endl;
}