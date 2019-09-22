// main1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "task1.cpp"
using namespace std;

int main(){
	int age;
	std::cout << "Enter age: ";
	cin >> age;

	if (ageCheck(age) == 1){
		cout << "Access granted\n";
	}
	else cout << "Access denied\n";

	
	return 0;
}

