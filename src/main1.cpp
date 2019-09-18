#include "task1.h"
#include <iostream>
using namespace std;

int main() {
	int age;
	cin >> age;
	int x = ageCheck(age);
	if (x == 1) cout << "Access granted";
	else cout << "Access denied";
}