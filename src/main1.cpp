#define _CRT_SECURE_NO_WARNINGS

#include "task1.h"
#include <iostream>

int main()
{
	std::cout << "Please enter your age";
	int age;
	std::cin >> age;
	if (ageCheck(age)) {
		std::cout << "Access granted";
	}
	else {
		std::cout << "Access denied";
	}
}
