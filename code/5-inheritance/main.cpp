#include <iostream>
#include "Shape.h"
#include <vector>

#define LOG(x) std::cout << x << std::endl;



int main()
{
    int a = 50;
    int * ptr = &a;

    a = 60;

    Circle c1;
    Circle * cptr = &c1;
    Shape s2;
    Shape * sptr = &s2;
    Shape * scptr = &c1;

    Shape s;
    Shape s1("Circle",50.3);
    Circle c(5.3,"Circle 2");
    Shape * pc = &c;
    s1.print(std::cout);
    // std::cout << s1;
    c.print(std::cout);
    pc->print(std::cout);
    // std::cout << c;

    std::vector<int> myvec;
    std::vector<int *> myvec;
    std::vector<Shape> myvec;
    std::vector<Circle> myvec;
    std::vector<Rectancle> myvec;
    std::vector<Shape *> myvec;


    return 0;
}
