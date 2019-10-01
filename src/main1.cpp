#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"


int main() 
{
	int age;
	scanf("%d", &age);
	if (ageCheck(age)) 
	{
		printf("Access granted");
	}
	else 
	{
		printf("Access denied");
	}
	return 1;
} 
