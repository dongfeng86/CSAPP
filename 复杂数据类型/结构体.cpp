#include <iostream>

struct SCoordinate
{
	const char* name;
	long x;
	long y;

	int sum();
};

int SCoordinate::sum()
{
	return x+y;
}

int main()
{
	char chh = 'a';
	SCoordinate structTemp;
	structTemp.x = 5;
	structTemp.y = 7;
	structTemp.name = "hehe";
	int summ = structTemp.sum();

	int mmmmm = sizeof(SCoordinate);

	int i = 5;
	//char c1 = 't';
	int m = 89;
	double ddd = 5.0;

	int sum = i + m;
	std::cout << sum<< std::endl;
	

	//static SCoordinate cCoorStatic;
	//cCoorStatic.x = 30.5;
	//cCoorStatic.y = 40.7;
	//cCoorStatic.name = "this is a static structure";
	////int total = cCoorStatic.sum();
	//SCoordinate cFirstCorner;
	//cFirstCorner.x = 20;
	//cFirstCorner.y = 30;
	//char ch[50] = "first";
	//cFirstCorner.name = ch;

	//std::cout << "×ø±êÃûÎª" << cFirstCorner.name << ";x=" << cFirstCorner.x << ",y=" << cFirstCorner.y << std::endl;

	return 0;
}


