//
// Created by saif on 03/11/2017.
//

#include <cmath>
#include "Points.h"

Points::Points(int a, int b) {
    Points::x=a;
    Points::y=b;

}

int Points::getX() {
    return Points::x;
}

int Points::getY() {
    return Points::y;
}

void Points::setX(int x) {
    Points::x=x;
}
void Points::setY(int y) {
    Points::x=y;
}

double Points::distance(Points &p) {
    return sqrt(pow(p.x-Points::x,2)+pow(p.y-Points::y,2));
}