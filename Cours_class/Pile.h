//
// Created by saif on 03/11/2017.
//

#ifndef COURS_CLASS_PILE_H
#define COURS_CLASS_PILE_H


class Pile {
private:
    int *stock;
    int tailleMax,sommet;
public:
    Pile(int tailleMax);
    virtual ~Pile();//destructeur
};


#endif //COURS_CLASS_PILE_H
