#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>


class Shape {
protected:
    std::string name;
    float area;
public:
    Shape();
    Shape(const std::string& name, float area);
    virtual void print(std::ostream& mystream)const;
    std::string getName() const;
    float getArea() const;
    void dummy();
};

class Circle : public Shape {
    float radius;
public:
    Circle();
    Circle(float radius, const std::string& name);
    void print(std::ostream& mystream) const;
};
class Rectancle : public Shape {
    float radius;
public:
    Rectancle();
};





std::ostream& operator << (std::ostream& mystream, const Shape& obj);  
// std::ostream& operator << (std::ostream& mystream, const Circle& obj);  
#endif