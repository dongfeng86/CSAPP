#include <iostream>

double f(int x)
{
	return 1.0 / x;
}

int get_cont(int * p1, int* p2)
{
	if (p1 > p2)
		return *p2;
	else
		return *p1;
}

int main()
{
	double a, b;
	int i;
	a = f(10);
	b = f(10);
	i = a == b;
	std::cout << i << std::endl;

	int m = 10, n = 20;
	a = get_cont(&m, &n);

	return 0;
}