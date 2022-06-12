#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main() {
    std::string names1;
    std::string names2;
    std::string* rumah1 = &names1;
    std::string* rumah2 = &names2;
    *rumah1 = "dimas";*rumah2 = "fatih";

    LOG(names1);
    LOG(names2);

    return 0;
}