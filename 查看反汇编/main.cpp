int sum(int x, int y);
bool Comp(int a, int b);
char Convert(char m);

char Convert(char m)
{
	return m + 32;
}

int main()
{
	int m = 5;
	int n = 3;
	bool b = Comp(m, n);
	char ch = 'a';
	char final;
	final = Convert(ch);
	int sumaary=sum(m, n);
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
