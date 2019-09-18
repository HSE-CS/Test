#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <conio.h>
#include "task1.h"

void main(int argc, char* argv[])
{
	printf("Please enter your age: ");
	int age;
	scanf("%d\n", &age);
	if(ageCheck(age)==1)
	{
		printf("Access granted");
	}
	else printf("Access denied");
	_getch();
}