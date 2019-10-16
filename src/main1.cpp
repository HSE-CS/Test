#include <iostream>
#include "task1.h"
using namespace std;

void main() {

	int age;
	
	cin >> age;
	
	if (ageCheck(age)) {
		cout << "Access granted";
	}
	else {
		cout << "Access denied";
	}
}