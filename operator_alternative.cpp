// 
// https://zh.cppreference.com/w/cpp/language/operator_alternative
// 
// Discussions:
// https://stackoverflow.com/questions/11582955/should-not-and-or-not-eq-be-used-in-c
// https://devblogs.microsoft.com/cppblog/permissive-switch/
// additional settings required in MS VS2017
#include <iostream>

int main() {
	if (true not_eq false)
	{
		std::cout << "true not_eq false" << std::endl;
	}
	if (true != false)
	{
		std::cout << "true not_eq false" << std::endl;
	}
	std::cin.get();
}
