int sum(int x, int y);
bool Comp(int a, int b);

int main()
{
	int m = 5;
	int n = 3;
	int sumaary=sum(m, n);
	bool b = Comp(m, n);
	return 0;
}

int sum(int x, int y)
{
	int t = x + y;
	return t;
}

bool Comp(int a, int b)
{
	return a > b;
}
