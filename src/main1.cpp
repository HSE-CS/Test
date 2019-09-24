#include <iostream>
#include "task1.h"

using namespace std;

int main()
{
	int age;
	cout << "How old are you?\n";
	cin >> age;
	if (ageCheck(age))
		cout << "Access granted\n";
	else
		cout << "Access denied\n";
	return 0;
}
