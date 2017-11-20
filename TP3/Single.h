//
// Created by saif on 04/11/2017.
//

#ifndef TP3_SINGLE_H
#define TP3_SINGLE_H

#include <iostream>
#include <cstdlib>

using namespace std;

class Single {
private:
    //Single();
    int entier;
    static Single * element;

public:
    Single();
    Single(int entier);
    int getEntier();
    void setEntier(int entier);
    static Single * getInstance();
};

//Single Single::element;

#endif //TP3_SINGLE_H
