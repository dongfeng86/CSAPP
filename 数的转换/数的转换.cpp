// 数的转换.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<limits.h>
#include<iomanip>

typedef unsigned char * byte_pointer;
void ShowByte(byte_pointer pStart, size_t len);
int strLonger(char *s, char *t);


int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	//以下显示几种奇妙的数的转换
	//int 和 unsigned具有相同的字节数，但是把他们强制转化为int型或者unsigned型后，表现出不同的数值
	int iInt = -1;
	unsigned uY = 2147483648;
	cout << "iX=" <<std::hex<< iInt << ";uY=" << uY << endl;
	cout << "(unsigned)iX=" <<std::dec<<(unsigned)iInt << ";(int)uY=" << (int)uY << endl;

	//以下显示的是无符号数的0扩展和有符号数的符号位扩展
	short sX = -12345;
	unsigned short usX = sX;
	int iX = sX;
	unsigned uX = usX;

	cout << "sx=" << (int)sX << "\t";
	ShowByte((byte_pointer)&sX, sizeof(short));
	cout << "usx=" << (unsigned)usX << "\t";
	ShowByte((byte_pointer)&usX, sizeof(unsigned short));

	cout << "x=" << iX << "\t";
	ShowByte((byte_pointer)&iX, sizeof(int));

	cout << "uX=" << uX << "\t";
	ShowByte((byte_pointer)&uX, sizeof(unsigned));

	//调用一个错误的函数
	char *chS1 = "hello";
	char* chS2 = "hello,world";
	cout << "\"hello\"比\"hello world\"长吗：" << strLonger(chS1, chS2) << endl;

	return 0;
}

//下面函数可以打印出每个数字类型中每个字节的整数值
void ShowByte(byte_pointer pStart, size_t len)
{
	for (size_t nI = 0; nI < len; nI++)
		std::cout << std::hex<<(unsigned int)pStart[nI];
	std::cout << std::dec<<std::endl;
}

//一个神奇的错误
int strLonger(char *s, char *t)
{
	unsigned uRe = strlen(s) - strlen(t);

	/*这句会引起错误；当有符号数和无符号数出现在一个运算中时且两者级别相等时
	，将两个操作数转换为有符号类型的无符号版本*/
	return strlen(s) - strlen(t) > 0;      
}