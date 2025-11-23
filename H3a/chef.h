#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include <string>
using namespace std;

class Chef {
protected:
    string name;

public:
    Chef(string _name);
    ~Chef();

    void makeSalad();
    void makeSoup();
};

#endif
