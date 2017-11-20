//
// Created by saif on 02/11/2017.
//

#include "CompteEnBanque.h"
#include <iostream>

using namespace std;


void CompteEnBanque::retirer(int somme) {
    sold+=somme;
}

void CompteEnBanque::deposer(int somme) {
    sold+=somme;
}

int CompteEnBanque::getSold() {
    return sold;
}

CompteEnBanque::CompteEnBanque() {
    sold=0;
}