// checkage.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "task1.h"
using namespace std;

int main(){
	int age;
	int check;
	cin >> age;
	check = checkAge(age);
	if (check == 1){
		cout << "Access granted";
	}
	else{
		cout << "Access denied";
	}
	return 0;
	getchar(); getchar();
}

