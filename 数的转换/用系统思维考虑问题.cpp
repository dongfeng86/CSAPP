#include <iostream>
using namespace std;

int main()
{
	int a = 0x80000000;
	int b = a / -1;
	cout << "���н��Ϊ" << b << endl;

	//int a = 0x80000000;
	//int b = -1;
	//int c = a / b;
	//cout << "���н��Ϊ" << c << endl;

	return 0;
}