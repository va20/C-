//
// Created by saif on 02/11/2017.
//

#ifndef COURS_CLASS_COMPTEENBANQUE_H
#define COURS_CLASS_COMPTEENBANQUE_H


class CompteEnBanque {
private:
    int sold;
public:
    CompteEnBanque();

    CompteEnBanque(const CompteEnBanque&);//constructeur par copie
    int getSold();
    void deposer(int somme);
    void retirer(int somme);
};


#endif //COURS_CLASS_COMPTEENBANQUE_H
