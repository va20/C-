//
// Created by saif on 17/11/2017.
//

#ifndef COURS_CLASS_NOMBRE_H
#define COURS_CLASS_NOMBRE_H


class Nombre {
private:
    double valeur;
    Nombre(double v){};
    static Nombre PI;
public:
    static Nombre *create(double);

};

Nombre Nombre::PI(3.14);



#endif //COURS_CLASS_NOMBRE_H
