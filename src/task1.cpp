#include "task1.h"
#include <iostream>
#include <string>

using namespace std; 

int ageCheck(int age) {
	if (age < 18) {
		cout << "Access denied";
		return 0;
	}
	else {
		cout << "Access granted";
		return 1;
	}
}