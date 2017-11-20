//
// Created by saif on 04/11/2017.
//

#include "Single.h"

Single*Single::element=NULL;


Single::Single() {
    entier=0;
}

Single::Single(int entier) {
    Single::entier=entier;
}

int Single::getEntier() {
    return entier;
}

void Single::setEntier(int entier) {
    Single::entier=entier;
}

Single * Single::getInstance() {
    if( element == NULL){
        element = new Single();
    }
    return element;
}