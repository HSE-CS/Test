#include "stdafx.h"
#include "conio.h"
#include <locale.h>
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
}
