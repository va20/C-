//
// Created by saif on 04/11/2017.
//

#include "Fractions.h"


Fractions::Fractions(const int x, const int y):a(x),b(y) {}

Fractions::Fractions(const Fractions & f):a(f.a),b(f.b) {}

void Fractions ::affiche() const {
    if(b!=1){
        cout << a << "/" << b << endl;
    }
    else{
        cout << a;
    }
}

Fractions Fractions::somme(const Fractions &f1, const Fractions &f2) {
    int n = f1.a + f2.b + f2.a + f1.b;
    int d = f1.b * f2.b;
    return Fractions(n,d);
}

/*int Fractions::pgcd(int a, int b) {
    int reste=0;
    int quotient=0;
    if(a!=0 && b!=0){
        while(a>0){
            quotient=b/a;
            reste=b%a;
            b=a;
            a=reste;
        }
    }
    return
}*/