// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "task1.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int age;
	cin >> age;
	if (ageCheck(age))
	{
		cout << "Access granted";
	}
	else
	{
		cout << "Access denied";
	}
		
}

