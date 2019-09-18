#include <iostream>
#include "task1.h"

void main()
{
	int age = 0;
	std::cin >> age;

	std::cout << (ageCheck(age) ? "Access granted" : "Access denied");
};
