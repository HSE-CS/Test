#include "task1.h"

/*  */

int main() // ����� ����� � ������� 
{
	setlocale(LC_ALL, "Ru");

	int age;
	cin >> age;
	if (ageCheck(age))
		cout << "Access granted" << endl;
	else
		cout << "Access denied" << endl;

}