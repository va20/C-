//
// Created by saif on 04/11/2017.
//
#include <iostream>


using namespace std;

void incrementer(int &x){
    x++;
}

void incrementer(int *x){
    (*x)++;
}

int incrementerMem(int x){
    x++;
    return x;
}

int incrementerP(int x){
    return ++x;
}


void permuterV(int x,int y){
    int tmp=x;
    x=y;
    y=tmp;
}

void permuterR(int &x,int &y){
    int tmp=x;
    x=y;
    y=tmp;
}


int main(){

    int x=5,y=10;
    cout << "avant incrementer" << x <<"\n";
    incrementer(x);
    cout << "apres incrementer" << x <<"\n";
    incrementer(&x);
    cout << "apres incrementer 2eme fois" << x <<"\n";
    x=incrementerMem(x);
    cout << "apres incrementer 3eme fois" << x <<"\n";
    x=incrementerP(x);
    cout << "apres incrementer 4eme fois" << x <<"\n";
    permuterR(x,y);
    cout << "x: "<< x <<"y: "<< y <<"\n";
    permuterV(x,y);
    cout << "x: "<< x <<"y: "<< y ;

    return 0;
}