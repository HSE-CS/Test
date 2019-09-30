#include <iostream>
#include "task1.h"

int main()
{
	int age;
	std::cout << "Age?:";
	std::cin >> age;
	if (ageCheck(age) == 1)
		std::cout << "Access granted";
	else 
                std::cout << "Access denied";


	return 0;
}