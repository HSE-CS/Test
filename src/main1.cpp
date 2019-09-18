#define _CRT_SECURE_NO_WARNINGS

#include "task1.h"
#include <stdio.h>

int main()
{
	int age;
	printf("enter your age: ");
	scanf("%i", &age);
	printf("\n");
	if (ageCheck(age))
	{
		printf("Access granted\n");
	}
	else
	{
		printf("Access denied\n");
	}
}