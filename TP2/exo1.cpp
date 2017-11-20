//
// Created by saif on 03/11/2017.
//

#include <iostream>
using namespace std;

int main(){
    int x=0;
    cout << "Entrez un entier : "<< endl;
    cin >> x;
    int *xp=&x;
    int &rx=x;
    cout << x << "\n" << *xp << "\n";
    cout << &x << "\n" << &rx << "\n" << xp;
    return 0;
}