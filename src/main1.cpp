#include <iostream>
#include "task1.h"

int main()
{
	int age = 0;
	std::cout << "Enter your age\n";
	std::cin >> age;
	if (ageCheck(age))
	{
		std::cout << "Access granted";
	}
	else
	{
		std::cout << "Access denied";
	}
}