// 该程序为一经典程序，展示了C语言中无符号和有符号数的一些微妙问题
//

//#include <iostream>
#include <stdio.h>

int main()
{
	int x = -1;
	unsigned u = 2147483648;
	int m = -2147483648;
	printf("x=%u=%d\n", x, x);
	printf("u=%u=%d\n", u, u);
	if (-2147483648 < 2147483647)
		printf("-2147483648<2147483647 is true\n");
	else
		printf("-2147483648<2147483647 is false\n");

	if(m< 2147483647)
		printf("变量m=-2147483648<2147483647 is true\n");
	else
		printf("变量m=-2147483648<2147483647 is false\n");

	if (-2147483648 - 1 < 2147483647)
		printf("-2147483648-1<2147483647\n");
	else if (-2147483648 - 1 == 2147483647)
		printf("-2147483648-1==2147483647\n");
	else
		printf("-2147483648-1>2147483647\n");
}