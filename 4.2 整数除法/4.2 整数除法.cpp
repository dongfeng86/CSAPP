#include <iostream>

int main()
{
	int a = 0x80000000;
	int b = a / -1;
	std::cout << "a/-1=" << b << std::endl;

	int c = -1;
	int d = a / c;
	std::cout << "a/c=" << d << std::endl;
	
	return 0;
}