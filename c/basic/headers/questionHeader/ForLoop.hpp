#include <iostream>

int ForLoop() {
    int angkaPerulangan;
    int tempPerulangan;

    std::cout << "masukkan angka berapapun, nanti akan terjadi sebuah looping atau perulangan\n";
    std::cin >> angkaPerulangan;

    for (tempPerulangan = 0; tempPerulangan < angkaPerulangan; ++tempPerulangan)
        std::cout << tempPerulangan << std::endl;

    return 0;
}