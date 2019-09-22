// main1.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include "task1.h"
using namespace std;

int main(){
	int age;
	std::cout << "Enter age: ";
	cin >> age;

	if (ageCheck(age)){
		cout << "Access granted";
	}
	else {
		cout << "Access denied";
	}

	
	return 0;
}

