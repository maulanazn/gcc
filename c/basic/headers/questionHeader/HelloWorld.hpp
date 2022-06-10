#include <iostream>
#include <errno.h>

int HelloWorld() {
    std::string message;
    char confirmationMessage;

    std::cout << "What is your message to the system?" << std::endl;
    std::getline(std::cin, message);

    std::cout << message << ".It is your message to the system?" << std::endl;
    std::cin >> confirmationMessage;

    if (confirmationMessage == 'Y')
        std::cout << message << std::endl;
    else if (confirmationMessage == 'N')
        std::cout << errno << std::endl;
    
    std::cin.get();

    return 0;
}