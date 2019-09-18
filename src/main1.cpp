#include <iostream>
#include "task1.h"

using namespace std;

int main() {
	int age;
	cin >> age;
	cout << (ageCheck(age) ? "Access granted" : "Access denied")<<'\n';
}