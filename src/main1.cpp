#include <iostream>
#include "task1.h"

using namespace std;

int main()
{
	int x;
	cout << "enter your age:";
	cin >> x;
	if (ageCheck(x) == 1)
		cout << "Access granted";
	else
		cout << "Access denied";
	
	return 0;
}