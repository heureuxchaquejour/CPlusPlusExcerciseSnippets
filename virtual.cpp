// 2019年3月27日 星期三 中国标准时间 13:29:26
// why virtual functions
// 
#include <iostream>

class Animal {
public:
	int age;
	virtual void eat() {
		std::cout << "Eat generic food." << std::endl;
	}
};

class Cat :public Animal{
public:
	int Fur;
	void eat() {
		std::cout << "Eat cat food." << std::endl;
	}
};

int main() {
	Animal* animal = new Cat;
	animal->eat();
	std::cin.get();
}
