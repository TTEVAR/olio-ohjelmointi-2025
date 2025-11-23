#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(string _name);
    ~ItalianChef();

    void makePasta();
    string getName();
};

#endif
