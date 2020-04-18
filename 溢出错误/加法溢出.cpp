#include<iostream>

int main()
{
	using namespace std;

	int iSum;
	int iAdd1 = 0x7FFFFFFF;
	iSum = iAdd1 + 1;
	/*
	以下结果说明一个问题，如果iAdd1不做类型转换，iAdd1+1就是一个int型的值，显然溢出；
	如果iAdd1做了类型转换，(int64_t)iAdd1 + 1就是一个int64_t类型的值，不会溢出。
	换句话说，两个运算数的运算结果所占的内存空间是最大运算数的大小。
	*/
	int64_t iSum64 = iAdd1 + 1;
	int64_t iSum64_2 = (int64_t)iAdd1 + 1;
	cout << "32位的结果为：" << iSum << "\n64位的结果为：" << iSum64 << "\n";
	cout << "(int64_t)iAdd1 + 1为：" << iSum64_2 << "\n";

	/*
	这是非常神奇的一个结果，结果是一个正数。原因是什么呢？
	因为无符号数和有符号数相乘，如果级别一样，就将有符号数转换为了无符号数；而相乘的结果在内存所占的位数就是
	完成自动转换后运算数的位数，所以，这个结果最终变成了一个正数。
	*/
	iAdd1 = -0x1;
	unsigned uM = 5;
	int64_t iMultiply = uM * iAdd1;	
	cout << "unsigned与signed的乘积为：" << iMultiply << endl;

	return 0;
	
}