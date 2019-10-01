#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <stdio.h>
#include "task1.h"

int main()
{
	int age;
	scanf("%d", &age);
	if (ageCheck(age) == 1)
	{
		printf("Access granted");
	}
	else
	{
		printf("Access denied");
	}
	return(1);
} 
