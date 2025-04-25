#include "Komplex.h"
#include "cmath"
#include <iostream>
Komplex::Komplex(){
    real = 0.0f;
    img = 0.0f;
}
Komplex::Komplex(float real, float img){
    this->real = real;
    this->img = img;
}
Komplex::Komplex(float abs, float arg,bool is_Degree){
    real = abs * cos(arg);
    img = abs * sin(arg);
}

void Komplex::print(){
    std::cout << "(" << this->real  << std::showpos << this->img << std::noshowpos <<"j)" << std::endl;
}