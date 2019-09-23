#include <iostream>
#include "task1.h"
using namespace std;

int main() {
	int age;
	cin >> age;
	if (ageCheck(age) == 1) {
		cout << "Acess granted";
	}
	else {
		cout << "Acess denied";
	}
}