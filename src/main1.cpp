#include "task1.h"
#include <iostream>
int main1(){
	int age = 0;
	std::cout << "Enter your age";
	std::cin >> age;
	if (ageCheck(age) == 1){
		std::cout << "Accepted";
	}
	else{
		std::cout << "Denied";
	}
	return 0;
}