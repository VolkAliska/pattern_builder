/* Car.h */

#ifndef CAR
#define CAR
#include <iostream>
#include <map>

using namespace std;

class Car{
	private:
	string carType;
	//info about car
	map<string, string> parts;

	public:
	Car(string type);
	virtual ~Car();

	string getPart(string key);
	void setPart(string key, string value);
	bool isPartExist(string key);
	void show();
}; 

#endif //CAR