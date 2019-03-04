#include <iostream>

int main() {
	const char string[] = {'Y', 97, 'n', 'g', 0};
	char* string2 = (char*)"Yoong";
	// MS Compiler would yell at me without (char*),
	// because "Yoong" is by default a const char [6]
	std::cout << string2 <<std::endl;
	std::cin.get();

}
