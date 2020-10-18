#include <iostream>
#include "task1.h"
using namespace std;
int main() {
	int a;
	cout << "Enter age";
	cin >> a;
	if (ageCheck(a) <1)
		cout << "Access denied";
	else cout << "Access granted";

}