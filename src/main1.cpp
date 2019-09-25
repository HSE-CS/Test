#include <iostream>
#include"task1.h"
using namespace std;


int main() {
	int age;
	cout << "How old are you?\n";
	cin >> age;
	int i=ageCheck(age);
	if (i) {
		cout << "Access granted";
	}
	else {
		cout << "Access denied";
	}
}