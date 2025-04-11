#include <iostream>
#include <cmath>

namespace Mohamed {
    void print(const char * msg) {
        std::cout << msg << std::endl;
    }
}

namespace Amir {
    void print(const char * msg) {
        std::cout << "Amir : " << msg << std::endl;
    }
}



int main() {
    std::cout << "Namespace Example in C++\n";
    Mohamed::print("haloo zusammen");
    Amir::print("haloo zusammen");

    return 0;
}
