/* Constructor.h */

#ifndef CONSTRUCTOR
#define CONSTRUCTOR
#include <iostream>
#include "Car.h"
#include "CarBuilder.h"
#include <map>

using namespace std;

class Constructor
{
    public:
    Constructor(){};
    virtual ~Constructor(){};

    void construct(CarBuilder* carBuilder);
};

#endif //CONSTRUCTOR