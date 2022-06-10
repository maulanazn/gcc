#include <iostream>
#include <errno.h>
#include <typeinfo>

struct animal {
	std::string nama;
	int umur;
}animals;

int TypeData() {
	std::cout << "tambahkan hewan" << std::endl;
	std::getline(std::cin, animals.nama);

	std::cout << animals.nama << std::endl;

    std::cin.get();

    return 0;
}
