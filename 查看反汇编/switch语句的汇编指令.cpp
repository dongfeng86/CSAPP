#include <iostream>
#include <tchar.h>
using namespace std;

int main()
{
	int a = 0;
	switch (a)
	{
	case 0:
		cout << _T("press 0") << endl;
		break;
	case 3:
		cout << _T("press 3") << endl;
		break;
	case 15:
		cout << _T("press 15") << endl;
		break;
	case 20:
		a += 10;
		cout << _T("press 20") << endl;
		break;
	default:
		break;
	}

	return 0;
}