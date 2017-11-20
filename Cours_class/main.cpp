#include <iostream>
#include "CompteEnBanque.h"

using namespace std;
int main() {

    CompteEnBanque compteEnBanque;

    cout << "Reste" << compteEnBanque.getSold() << endl;

    compteEnBanque.deposer(100);
    compteEnBanque.retirer(20);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}