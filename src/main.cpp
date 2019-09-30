#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main()
{
	int age = 0;
	scanf("%i", &age);
	if (ageCheck(age) == 1)
		printf("Access granted");
	else printf("Access denied");

	return 0;
}