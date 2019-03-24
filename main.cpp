#include <iostream>

#include "include/Car.h"
#include "include/CarBuilder.h"
#include "include/KiaBuilder.h"
#include "include/NissanBuilder.h"
#include "include/ToyotaBuilder.h"
#include "include/VazBuilder.h"
#include "include/Constructor.h"

using namespace std;

int main(){
    CarBuilder *builder;
    Constructor *constructor = new Constructor();
    builder = new KiaBuilder();
    constructor->Construct(builder);
    builder->getCar()->show();
    cout << "kek" << endl;
    return 0;
}