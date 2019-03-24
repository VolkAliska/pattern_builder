/* Constructor.cpp */

#include <iostream>
#include "include/Constructor.h"
using namespace std;

void Constructor::Construct(CarBuilder* carBuilder){
    string mode;
    cout << "Enter color" << endl;
    cin >> mode;
    carBuilder->buildColor(mode);

    cout << "Enter engine type" << endl;
    cin >> mode;
    carBuilder->buildEngine(mode);

    cout << "Enter engine's capacity" << endl;
    cin >> mode;
    carBuilder->buildCapacity(mode);

    cout << "Enter car's dimentions'" << endl;
    cin >> mode;
    carBuilder->buildDimentions(mode);

    cout << "Enter year" << endl;
    cin >> mode;
    carBuilder->buildYear(mode);

    cout << "Enter number of doors" << endl;
    cin >> mode;
    carBuilder->buildDoors(mode);

    cout << "Enter car model" << endl;
    cin >> mode;
    carBuilder->buildModel(mode);

    cout << "Enter type of wheels" << endl;
    cin >> mode;
    carBuilder->buildWheels(mode);

    cout << "Enter trunk capacity" << endl;
    cin >> mode;
    carBuilder->buildTrunk(mode);

    int isAdd;
    cout << "Enter 1 if u want to add extra" << endl;
    cin >> isAdd;
    carBuilder->buildAdd(isAdd);
}


