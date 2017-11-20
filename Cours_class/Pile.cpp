//
// Created by saif on 03/11/2017.
//

#include "Pile.h"

Pile::Pile(int tm) {
    stock = new int [tm];
    tailleMax=tm;
    sommet=0;
}

Pile::~Pile() {
    delete [] stock; // plus de fuite memeoire
}