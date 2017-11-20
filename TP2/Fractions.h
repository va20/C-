//
// Created by saif on 04/11/2017.
//

#ifndef TP2_FRACTIONS_H
#define TP2_FRACTIONS_H

#include <iostream>
using namespace std;

class Fractions {
private:
    int a;
    int b;
public:
    Fractions(const int,const int=1);
    void affiche() const;
    static Fractions somme(const Fractions &,const Fractions &);
    int pgcd(int ,int );
    Fractions (const Fractions &);
};


#endif //TP2_FRACTIONS_H
