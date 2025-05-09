#include "Shape.h"
#include <cmath>

Shape::Shape(){
    name = "No Name";
    area = 0.0f;
}

Shape::Shape(const std::string& name, float area){
    this->name = name;
    this->area = area;
}

void Shape::print(std::ostream& mystream) const {
    mystream << "Name : " << this->name << "\tArea : " << this->area << std::endl;
}


std::string Shape::getName() const{
    return this->name;
}
float Shape::getArea() const{
    return this->area;
}

void Shape::dummy(){
}


Circle::Circle(){
    this->radius = 0.0f;
}

Circle::Circle(float radius, const std::string& name) : Shape(name,0), radius(radius){
    float new_area = 2 * M_PI * this->radius;
    this->area = new_area;
}

void Circle::print(std::ostream& mystream) const{
    mystream << "Name : " << this->name << "\tArea : " << this->area << "\tRadius : " << this->radius << std::endl;
}



// Überladung der Ausgabe Operator
std::ostream& operator << (std::ostream& mystream, const Shape& obj){
    obj.print(mystream);
    return mystream;
}