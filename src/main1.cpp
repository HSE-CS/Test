#include "task1.h"
#include <iostream>

int main() {
	int age;
	std::cout << "Enter an age:";
	std::cin >> age;
	if (ageCheck(age) == 1) {
		std::cout << "Access granted\n";
	}
	else
	{
		std::cout << "Access denied\n";
	}
	system("pause");
	return 0;
}