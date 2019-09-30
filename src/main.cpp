#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main()
{
	int age = 0;
	printf("Type in your age:");
	scanf("%i", &age);
	printf("%i", ageCheck(age));

	return 0;
}