// float, double & long double in C++
// ieee754 标准
// https://www.h-schmidt.net/FloatConverter/IEEE754.html
// https://zh.wikipedia.org/zh-hans/IEEE_754

#include <iostream>

int main() {
	double d64 = 1.; // double in default
	float f32 = .3f; // explicit float
	std::cout << "sizeof double is " << sizeof d64 << " bytes." << std::endl;
	std::cout << "sizeof float is " << sizeof f32 << " bytes." << std::endl;
	//-----------------
	// https://zh.cppreference.com/w/cpp/language/types
	// long double - 扩展精度浮点类型。不必映射到 IEEE - 754 所强制的类型。在 x86 和 x86 - 64 架构上通常为 80 位 x87 浮点类型。
	const long double PI = 3.141592653589793238e0L; // use capital L
	std::cout << "sizeof long double is " << sizeof PI << " bytes." << std::endl;
	// why output is 8 bytes? windows10 VS2017 debug x86
	std::cin.get();
}
