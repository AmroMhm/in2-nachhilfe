#include <iostream>
#define TYPECASTING


void change_per_pointer(int * a){
    *a = *a * 2;
}

void change_per_reference(int& a){
    a = a * 2;
}

void change_per_value(int a){
    a = a * 2;
}


int main(int argc, char const *argv[])
{

#ifdef FUNCS
    int var = 5;
    change_per_pointer(&var);
    std::cout << "var = " << var << std::endl;
    change_per_value(var);
    std::cout << "var = " << var << std::endl;
    change_per_reference(var);
    std::cout << "var = " << var << std::endl;
    #endif
    
#ifdef TYPECASTING
    char * str = "abcd";
    float f = 97.14;
    int a = 5;
    int b = 10;
    int * ptr = new int;
    int c = 10;
    *ptr = 77;
    int ** ptr2 = &ptr;
    std::cout << "adress = " << ptr << std::endl;
    std::cout << "value = " << *ptr << std::endl;

#endif
    return 0;
}
