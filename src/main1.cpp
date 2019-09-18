#include <iostream>
#include "task1.h"
using namespace std;
int main() {
	int n;
	string yes = "Access granted", no = "Access denied";
	cin >> n;
	if (ageCheck(n))
		cout << yes;
	else
		cout << no;
}
