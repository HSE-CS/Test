#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>


void main()
{
	int age;
	printf("how old are you?");
	scanf("%d", &age);
	if (ageCheck(age) == 0)
	{
		printf("Access denied");
	}
	if (ageCheck(age) == 1)
	{
		printf("Access granted");
	}
}