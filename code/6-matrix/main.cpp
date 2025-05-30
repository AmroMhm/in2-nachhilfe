#include <iostream>
#include "Matrix.h"


// #define OPERATOR_OVERLOAD
#define COPY_CONSTRUCTOR
// #define ASSIGNMENT_OPERATOR


#ifdef OPERATOR_OVERLOAD
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

#endif

#ifdef COPY_CONSTRUCTOR

class Person {
    public:
    std::string * name;
    int * age;
    Person(std::string name, int age) : name(new std::string(name)), age(new int(age)) {}
    void whoami()const {
        std::cout << "My Name is : " << *name << "\tmy age is : " << *age << std::endl;
    }

    Person(const Person& other_person){
        // this->name = other_person.name;
        // this->age = other_person.age;
        this->name = new std::string();
        this->age = new int;

        *(this->name) = *(other_person.name);
        *(this->age) = *(other_person.age);
    }

};

#endif

int main()
{   

#ifdef OPERATOR_OVERLOAD
    /* code */
    Matrix m(5,5);
    m[0] = 3;
    m[1] = 3;
    m[18] = 9;
    m[8] = -1;
    m[12] = -2;


    UnitMatrix um(5);

    std::cout << "Matrix m:" << m <<  std::endl;
    std::cout << "Matrix um:" << um <<  std::endl;

    A a;
    B b;


    Matrix sum_matrix_plus_int = m  * 5;
    std::cout << "Matrix m * 5: \n" << sum_matrix_plus_int <<  std::endl;
    std::cout << "Matrix m: \n" << m <<  std::endl;
    Matrix m_plus_um = m  + um;
    std::cout << "Matrix m + um: \n" << m_plus_um <<  std::endl;
    Matrix um_min_m = um  - m;
    std::cout << "Matrix m - um: \n" << um_min_m <<  std::endl;

    std::string s = "Hello World";
    std::string s2 = "Hello World 2";
    std::cout << "String s: " << s + s2 << std::endl;
#endif

#ifdef COPY_CONSTRUCTOR
    Person p("Foulen", 20);
    Person p2(p);
    Person cp2("Foulen3",55);
    cp2 = p;
    p.whoami();
    p2.whoami();
    
    *(p.age) = 77;
    
    p.whoami();
    p2.whoami();
    cp2.whoami();

    Matrix m(5,5);
    Matrix cpm(m);
    Matrix mcp2(2,2);
    mcp2 = m;
    m[0] = 3;

    std::cout << "Matrix m:" << m <<  std::endl;
    std::cout << "Matrix cpm:" << cpm <<  std::endl;
    std::cout << "Matrix cp2:" << mcp2 <<  std::endl;

#endif

#ifdef ASSIGNMENT_OPERATOR

#endif

    return 0;
}
