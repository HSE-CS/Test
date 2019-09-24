#include "task1.h"

/*  */

int main() // точка входа в систему 
{
	setlocale(LC_ALL, "Ru");

	int age;
	cin >> age;
	if (ageCheck(age))
		cout << "Access granted" << endl;
	else
		cout << "Access denied" << endl;

}