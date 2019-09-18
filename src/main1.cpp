#include "task1.h"
#include <stdio.h>
#include <conio.h>

int main()
{
	int age;
	printf("Input your name, please\n");
	scanf_s("%i", &age);
	if (ageCheck(age)){
	printf("Access denied!");
	}
	else {
		printf("Access granted");
	}
	_getch();
	return 0;
}