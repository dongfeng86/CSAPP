#include <iostream>
using namespace std;

int main()
{
	int a = 0x80000000;
	int b = a / -1;
	cout << "运行结果为" << b << endl;

	//int a = 0x80000000;
	//int b = -1;
	//int c = a / b;
	//cout << "运行结果为" << c << endl;

	return 0;
}