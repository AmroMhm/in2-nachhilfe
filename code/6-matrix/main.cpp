#include <iostream>
#include "Matrix.h"

class A {
    public:
    A(){
        std::cout << "Constructor A called !" << std::endl;
    }
    A(int a){
        std::cout << "Constructor A called !" << std::endl;
    }
};
class B {
    A a_boject;
    public:
    B(){
        
        std::cout << "Constructor B called !" << std::endl;
    }
};


int main()
{   
    /* code */
    Matrix m(5,5);
    Matrix cm(m);
    Matrix cm2(5,5);
    cm2 = m;
    m[8] = -1;
    std::cout << m ;
    std::cout << cm ;
    std::cout << cm2 ;
    return 0;
}
