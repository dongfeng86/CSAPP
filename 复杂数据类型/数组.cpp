#include <iostream>

int adder();

int main()
{
	adder();
}

int adder()
{
	static short num[][4] = { {2,9,-1,5},
							{3,8,2,-5} };
	static short *pn[] = { num[0],num[1] };
	static short s[2] = { 0,0 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
			s[i] += *pn[i]++;
		std::cout << "sum of line:" << s[i];
	}


	int buf[2] = { 10,20 };
	int i, sum=0;
	for (i = 0; i < 2; i++)
		sum += buf[i];
	return sum;
}