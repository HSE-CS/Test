#include <iostream>
#include "task1.h"
using namespace std;

int main()
{
	int age;
	cout << "Enter your age" << endl;
	cin >> age;
	if (ageCheck(age))
		cout << "Access granted" << endl;
	else
		cout << "Access denied" << endl;
	return 0;
}
