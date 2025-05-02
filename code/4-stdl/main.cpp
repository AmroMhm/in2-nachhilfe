#include <iostream>
#include <vector>
#include "Shape.h"


#define LOG(x) std::cout << x << std::endl;

// #define SETTER_GETTER
// #define STRING
#define VECTOR



int main() {

#ifdef SETTER_GETTER
    Shape s1;
    Shape s2(70.4, "Square");
    s1.show();
    s2.show();
    float s1_area = s1.getArea();
    std::cout << "S1 Area : " << s1_area << std::endl;
    s1.setArea(66.8);
    s1.show();
#endif

#ifdef STRING
    const int a = 5;
    char c = 'g';
    LOG(c)
    char * string = "Mohamed";
    LOG(string)
    LOG(string[1])
    string = "Muhamed";
    char string2[7] = "hallo\0";
    string2[1] = 'e';
    LOG(string2)

    std::string mystr("Amr");
    LOG(mystr)
    LOG(mystr.size())
    LOG(mystr.at(2))
    mystr[2] = 'i';
    LOG(mystr)
#endif

#ifdef VECTOR
    // int myarray[10] = {0};
    // for(int i = 0; i < 10 ; i++)
    //     LOG(myarray[i])
    
    // int * array2 = nullptr;
    // int size = 0;
    // LOG("Give Me Size : ")
    // std::cin >> size;
    // if(size) {
    //     array2 = new int[size];
    // }
    // LOG(array2)
    // LOG(*array2)
    // LOG(array2 + 1)
    // LOG(*(array2 + 1))

    std::vector<int> myvec;
    LOG(myvec.capacity())
    myvec.push_back(55);
    LOG(myvec.capacity())
    myvec.push_back(55);
    LOG(myvec.capacity())
    myvec.push_back(55);
    LOG(myvec.capacity())
    myvec.push_back(55);
    LOG(myvec.capacity())
    myvec.push_back(55);
    LOG(myvec.capacity())
    myvec.push_back(55);
    LOG(myvec.capacity())
    myvec.push_back(55);
    LOG(myvec.capacity())
    std::vector<int> myvec2;
    myvec2.reserve(16);
    LOG(myvec2.capacity())
    for(int i = 0 ; i < 16; i++){
        myvec2.push_back(i);
    }
    LOG(myvec2.size())
    LOG(myvec2.capacity())
    myvec2.push_back(77);
    LOG(myvec2.capacity())

    std::vector<Shape> shapes;
    shapes.push_back(Shape());
    shapes.push_back(Shape(55.6,"Circle"));
    shapes.push_back(Shape(33,"Square"));
    for(int i = 0; i < shapes.size() ; i++){
        shapes[i].show();
        shapes[i].setArea(0);
    }
    for(auto var : shapes){
        var.show();
    }

#endif





    return 0;
}