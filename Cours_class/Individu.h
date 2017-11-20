//
// Created by saif on 03/11/2017.
//

#ifndef COURS_CLASS_INDIVIDU_H
#define COURS_CLASS_INDIVIDU_H


class Individu {
private:
    const int nb_ss;
    int compte;
    mutable int nb_consultation;
public:
    Individu(...);
    Individu(const Individu &);
    int getNBSS() const {
        nb_consultation++;
        return compte;
    }
};


#endif //COURS_CLASS_INDIVIDU_H
