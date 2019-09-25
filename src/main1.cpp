#include <iostream>
#include "task1.h"

int main() {
	int age;
	std::cout << "Enter age : ";
	std::cin >> age;
	int flag = ageCheck(age);
	if (flag == 0) {
		std::cout << "Access denied";
	}
	else {
		std::cout << "Access granted";
	}
return 0;
} 