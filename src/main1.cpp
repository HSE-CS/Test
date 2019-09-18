#include <iostream>
#include "task1.h"
using namespace std;
int main(){
	int age;
	cout << "enter age";
	cin >> age;
	if (ageCheck(age)){
		cout << "Access granted";
	}
	else{
		cout << "Access denied";
	}
}