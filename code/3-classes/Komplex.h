#ifndef __KOMPLEX_H
#define __KOMPLEX_H


class Komplex {
public:
    float real;
    float img;
    Komplex();
    Komplex(float real, float img);
    Komplex(float abs ,float arg, bool is_Degree);
    void print();
};




#endif