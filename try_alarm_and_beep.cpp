#include <iostream>
#include <windows.h>

int main() {
	std::cout << "\a" << std::endl;
	// alarm is not working 
	// the beep should come from the motherboard
	// however recent oses does not respond to that.
	// so try alternative
	Beep(523, 500);
	// it worked.
	std::cin.get();
}
