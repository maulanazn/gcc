#include <iostream>
#include <errno.h>
#include <typeinfo>

int TypeData() {
    std::string iniString = "stringg";
    std::cout << typeid(iniString).name();

    
    std::cin.get();

    return 0;
}