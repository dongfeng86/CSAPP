#include <iostream>

struct SCoordinate
{
	char* name;
	double x;
	double y;
};

int main()
{
	SCoordinate cFirstCorner;
	cFirstCorner.x = 20;
	cFirstCorner.y = 30;
	char ch[50] = "first";
	cFirstCorner.name = ch;

	std::cout << "×ø±êÃûÎª" << cFirstCorner.name << ";x=" << cFirstCorner.x << ",y=" << cFirstCorner.y << std::endl;

	return 0;
}