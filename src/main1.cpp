#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <iostream>
using namespace std;


void main()
{
	int age;
	cout << "how old are you?";
	cin >> age;
	if (ageCheck(age) == 0)
	{
		cout << "Access denied";
	}
	if (ageCheck(age) == 1)
	{
		cout << "Access granted";
	}
}