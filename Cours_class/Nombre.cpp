//
// Created by saif on 17/11/2017.
//

#include "Nombre.h"


Nombre::Nombre(double v) {
    this->valeur=v;//or valeur=v
}

Nombre* Nombre::create(double v) {
    if(v==3.14){
        return &PI;
    }
    return new Nombre(v);
}

