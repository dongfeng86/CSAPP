#include<iostream>

int main()
{
	int m = 0x80000000;
	unsigned int n = 0x80000000;

	std::cout << (m >> 1) << std::endl;
	std::cout << (n >> 1) << std::endl;
	
	return 0;
}