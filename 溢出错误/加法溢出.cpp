#include<iostream>

int main()
{
	using namespace std;

	int iSum;
	int iAdd1 = 0x7FFFFFFF;
	iSum = iAdd1 + 1;
	/*
	���½��˵��һ�����⣬���iAdd1��������ת����iAdd1+1����һ��int�͵�ֵ����Ȼ�����
	���iAdd1��������ת����(int64_t)iAdd1 + 1����һ��int64_t���͵�ֵ�����������
	���仰˵����������������������ռ���ڴ�ռ�������������Ĵ�С��
	*/
	int64_t iSum64 = iAdd1 + 1;
	int64_t iSum64_2 = (int64_t)iAdd1 + 1;
	cout << "32λ�Ľ��Ϊ��" << iSum << "\n64λ�Ľ��Ϊ��" << iSum64 << "\n";
	cout << "(int64_t)iAdd1 + 1Ϊ��" << iSum64_2 << "\n";

	/*
	���Ƿǳ������һ������������һ��������ԭ����ʲô�أ�
	��Ϊ�޷��������з�������ˣ��������һ�����ͽ��з�����ת��Ϊ���޷�����������˵Ľ�����ڴ���ռ��λ������
	����Զ�ת������������λ�������ԣ����������ձ����һ��������
	*/
	iAdd1 = -0x1;
	unsigned uM = 5;
	int64_t iMultiply = uM * iAdd1;	
	cout << "unsigned��signed�ĳ˻�Ϊ��" << iMultiply << endl;

	return 0;
	
}