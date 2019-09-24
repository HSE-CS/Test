
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#include <iostream>


int ageCheck(int age)
{
	if (age < 18)
		return 0;
	else
		return 1;
}