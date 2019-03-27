// 2019年3月27日 星期三 中国标准时间 14:17:32
//
// Why do we use member initializer list?
// https://www.youtube.com/watch?v=1nfuYMXjZsA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb
// Why?
// - Clean code
// - Performance, in case the default constructor is called before entering the constructor body, or classes without default constructor
// - const or reference variables can not be initilized within the body
// - the members should be in order in list as they are declaerd




#include <iostream>
#include <string>

class Example 
{
public:
	Example()
	{
		std::cout << "Create an exmaple." << std::endl;
	}

	Example(int x)
	{
		std::cout << "Create an example with " << x << "." << std::endl;
	}
};

class Entity 
{
private:
	std::string m_Name;
	Example m_Example;
public:
	Entity()
		// : m_Example(8)
	{
		m_Example = Example(8); // constructor called twice
		m_Name = "Unknown";
	}

};


int main()
{
	Entity e0;
	std::cin.get();
}
