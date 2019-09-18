//#include "task1.h"

#include <iostream>
#include "task1.h"

int main() {
	int age;
	std::cout << "Input age: ";
    std::cin >> age;
    if (ageCheck(age))
		std::cout << "Access granted";
	else 
		std::cout << "Access denied";
	return 0;
}