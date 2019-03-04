
#include <iostream>

int main() {
	bool condition = true;
	bool* ptr = &condition;
	std::cout << "bool condition is initialized as " << condition
		<< " with size of " << sizeof (condition) << " bytes." << std::endl;
	std::cout << "a pointer to bool is " << sizeof ptr << " bytes long." 
		<< std::endl;
	std::cin.get();
}
