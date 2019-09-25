#include "task1.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter your age" << endl;
	cin >> age;
	if (ageCheck(age) == 1)
	{
		cout << "Access granted" << endl;
	}
	else
	{
		cout << "Access denied" << endl;
	}
	system("pause");
}