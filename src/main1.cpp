#include <iostream>
#include "task1.h"
using namespace std;

int main() {
	int a;
	cout << "Print age: ";
	cin >> a;

	if (ageCheck(a)) {
		cout << "Access denied";
	}
	else {
		cout << "Access granted";
	}
}