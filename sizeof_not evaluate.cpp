#include <iostream>

int main() {
	char* string = "Not evaluated.";
	std::cout << string << std::endl;
	// expressions in sizeof() is not evaluated.
	// 当应用于某个表达式时， sizeof 并不对表达式进行求值，并且即便表达式代表多态对象，其结果也是该表达式的静态类型的大小。不进行左值向右值、数组向指针和函数向指针转换。
	// from https://zh.cppreference.com/w/cpp/language/sizeof

	std::cout << sizeof(string = "Modified.") << std::endl;
	std::cout << string << std::endl;
	std::cin.get();
  
}
