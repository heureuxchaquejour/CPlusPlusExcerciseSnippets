// 2019年3月5日 星期二 中国标准时间 17:50:55
// short-circuit evaluation

#include <iostream>

bool ReturnTrue()
{
	std::cout << "bool ReturnTrue(); called." << std::endl;
	return true;
}
bool ReturnFalse()
{
	std::cout << "bool ReturnFalse(); called." << std::endl;
	return false;
}
int main()
{
	// second condition not evaluated
	if (ReturnFalse() && ReturnTrue() )
		std::cout << "ReturnFalse() && ReturnTrue()  is true." << std::endl;
	else
		std::cout << "ReturnFalse() && ReturnTrue()  is false." << std::endl;
	if (ReturnTrue() || ReturnFalse())
		std::cout << "ReturnTrue() || ReturnFalse()  is true." << std::endl;
	else
		std::cout << "ReturnTrue() || ReturnFalse()  is false." << std::endl;


}
