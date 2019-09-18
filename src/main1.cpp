// TASK.cpp: определяет точку входа для консольного приложения.
//
#include <iostream>
#include "task1.h"

using namespace std;
int main()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	if (ageCheck(age) == 1){
		cout << "Access granted";
	}
	else
		cout << "Access denied";
	return 0;
}
	


