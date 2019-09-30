#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "task1.h"
 
int ageCheck(int age);

int main() {
	int age = 0;
	int a = 0;
	std::cout << "Enter your age ";
	std::cin >> age;
	a = ageCheck(age);
	if (a == 0) {
		std::cout << "Access denied";
	}
	else {
		std::cout << "Access granted";
	}
    return 0;
}