#include <iostream>
#include "task1.h"

using namespace std;

int main()
{
	int a;
	cin >> a;
	int access = ageCheck(a);
	if (access == 0)
	cout << "Access denied";
	else if (access == 1) cout << "Access granted";
}