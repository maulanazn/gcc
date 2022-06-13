#include <iostream>
#include <errno.h>
#include "questionHeader/HelloWorld.hpp"
#include "questionHeader/TypeData.hpp"
#include "questionHeader/ForLoop.hpp"
void Question() {
    int statements;

    std::cout << "Pick your question\n";
    std::cout << "1.HelloWorld Validation\n2.Type Data\n3.For Loop\n\t";

    std::cin >> statements;

    switch(statements){
        case 1:
            HelloWorld();
            break;
        case 2:
            TypeData();
            break;
        case 3:
            ForLoop();
            break;
        default:
            std::cout << errno << ": " << statements << std::endl;
            break;
    }
}