#include <iostream>

int main()
{
	union Num
	{
		int a;
		char b;
	} num;
	num.a = 0x12345678;
	if (num.b == 0x12)
		std::cout << "big endian\n";
	else
		std::cout << "little endian\n";

	std::cout << "num.b=0x" <<std::hex<<(int)num.b << std::endl;
}