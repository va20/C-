//
// Created by saif on 03/11/2017.
//

#ifndef TP1_POINTS_H
#define TP1_POINTS_H


class Points {
private:
    int x;
    int y;
public:
    Points(int a,int b);
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
    void affiche();
    double distance(Points &);
};


#endif //TP1_POINTS_H
