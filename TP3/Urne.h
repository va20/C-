//
// Created by saif on 18/11/2017.
//

#ifndef TP3_URNE_H
#define TP3_URNE_H
#include <vector>
#include <stdlib.h>

using namespace std;
class Scrutin;

class Urne {

private:
    Scrutin * ref;
    int num_bureau_vote;
    vector<int> votes;

public:
    Urne(){
        ref=NULL;
        num_bureau_vote=0;
        votes=new int
    }
};


#endif //TP3_URNE_H
