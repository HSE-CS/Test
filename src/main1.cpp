#include "task1.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter your age" << "\n";
	int age;
	cin >> age;
	if (ageCheck(age))
	{
		cout << "Access granted" << "\n";
		return 0;
	}
	cout << "Access denied" << "\n";
	return 0;
}