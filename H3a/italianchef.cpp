#include "italianchef.h"

ItalianChef::ItalianChef(string _name) : Chef(_name) {
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << name << " destuktori" << endl;
}

void ItalianChef::makePasta() {
    cout << "ItalianChef " << name << " makes pasta" << endl;
}

string ItalianChef::getName() {
    return name;
}
