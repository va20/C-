#include <iostream>
#include "Points.h"

using namespace std;

int main() {
    Points p{3,5};

    const Points origine{0,0};

    double d=p.distance(const_cast<Points &>(origine));
    cout << "distance"<<d<<endl;
    std::cout << "Hello, World!" << std::endl;
    srand(time(nullptr));
    int m=rand()%100;
    int n=rand()%100;
    int res=0,x=0,cmp=0;

    cout << "premier nombre : "<<m<<"\n"<<endl;
    cout << "deuxiem nombre : "<<n<<"\n"<<endl;

    res=m+n;

    cout << "Quel est le resultat ? :"<<"\n"<<endl;
    cin >> x;
    while(x!=res){
        cout << "Wrong"<<endl;
        cout << "Quel est le resultat ? :"<<"\n"<<endl;
        cin >> x;
        cmp++;
    }

    cout << "Le nombre d'echec est : "<<cmp<<endl;
    return 0;
}