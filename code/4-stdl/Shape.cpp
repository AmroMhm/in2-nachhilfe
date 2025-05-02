#include "Shape.h"
#include <iostream>
// Shape::Shape(){ this->area = 0.0; this->name = "No Name";}
Shape::Shape(float area, char * name){ 
    this->area = area; this->name = name;
}

void Shape::show(){
    std::cout << "Name : " << this->name << "\tArea : " << this->area << std::endl;
}


float Shape::getArea() const {
    return this->area;
}
void  Shape::setArea(float new_area) {
    this->area = new_area;
}