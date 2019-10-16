#include <iostream>
#include "task1.h"

using namespace std;

int ageCheck(int age)
{
	if (age >= 18) {
		cout << "Access granted" << endl;
		return 1;
	}
	else {
		cout << "Access denied" << endl;
		return 0;

	}
}
