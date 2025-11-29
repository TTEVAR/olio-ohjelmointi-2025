#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "engine.h"
#include "wheel.h"
using namespace std;

class Car {
private:
    Engine objEngine;
    Wheel objWheel1, objWheel2, objWheel3, objWheel4;
    string model;
    string brand;

public:
    Car();
    Car(string b, string m);

    void setEngine();
    void setWheels();

    string getModel();
    void setModel(string m);

    string getBrand();
    void setBrand(string b);

    void printDetails();
};

#endif
