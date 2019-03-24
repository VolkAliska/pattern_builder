#include <iostream>
#include <fstream>

#include "include/Car.h"
#include "include/CarBuilder.h"
#include "include/KiaBuilder.h"
#include "include/NissanBuilder.h"
#include "include/ToyotaBuilder.h"
#include "include/VazBuilder.h"
#include "include/Constructor.h"

using namespace std;

int main(){ 
    string type, line, filename;
    ifstream file;
    char mode, end = 1;
    while(end){
        cout << "1. Create vaz" << endl;
        cout << "2. Create kia" << endl;
        cout << "3. Create toyota" << endl;
        cout << "4. Create nissan" << endl;
        cout << "5. Show cars" << endl;
        cout << "6. Escape" << endl;
        cin >> mode;

        CarBuilder *builder;
        Constructor *constructor = new Constructor();
        
        switch (mode)
        {
            case '1':
                type = "vaz";
                filename = type + ".txt";
                builder = new VazBuilder();
                constructor->construct(builder);
                builder->getCar()->show();
                builder->getCar()->save(filename);
                break;

            case '2':
                type = "kia";
                filename = type + ".txt";
                builder = new KiaBuilder();
                constructor->construct(builder);
                builder->getCar()->show();
                builder->getCar()->save(filename);
                break;

            case '3':
                type = "toyota";
                filename = type + ".txt";
                builder = new ToyotaBuilder();
                constructor->construct(builder);
                builder->getCar()->show();
                builder->getCar()->save(filename);
                break;

            case '4':
                type = "nissan";
                filename = type + ".txt";
                builder = new NissanBuilder();
                constructor->construct(builder);
                builder->getCar()->show();
                builder->getCar()->save(filename);
                break;
            
            case '5':
                cout << "Enter car type" << endl;
                cin >> type;
                filename = type + ".txt";
                file.open(filename);
                if(file.is_open()){
                    while( !file.eof()){
                        getline(file, line);
                        cout << line << endl;
                    }
                }
                else
                    cout << "Error opening file" << endl;
                file.close();
                break;
        
            default:
                end = 0;
                break;
        }
    }
    return 0;
}