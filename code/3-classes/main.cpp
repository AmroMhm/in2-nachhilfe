#include <iostream>
#include "Komplex.h"


// #define PERSON
#define KOMPLEX

class Person {
public:
    char * name;
    int age;
    char * titel;

    Person(char * new_name, int new_age, char * new_title){
        name =  new_name;
        age = new_age;
        titel = new_title;
    }    
    
    Person(char * new_name){
        name =  new_name;
        age = -1;
        titel = "No Title";
    }
    Person(){
        name =  "No Name";
        age = -1;
        titel = "No Title";
    }

    void whoami(){
        std::cout << "My Name is : " << age << std::endl;
    }    
    
    void show();
    int * getAdress(){
        return (int *)this;
    }
};

void Person::show(){
    std::cout << "My Name is : " << age << std::endl;
}






int main(int argc, char const *argv[])
{

#ifdef PERSON
    int a = 77;
    Person mohamed("Mohamed",99,"Student");
    Person amr("Amr",88,"Dr.");
    Person bachir("Bachir");
    Person samir;
    int * adress = amr.getAdress();
#endif

#ifdef KOMPLEX
    Komplex k1;
    Komplex k2(1.2, -4.5);
    Komplex k3(1.2, 1.5, true);
    k1.print();
    k2.print();
    k3.print();


#endif
    
    return 0;
}
