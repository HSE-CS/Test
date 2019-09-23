#include <iostream>
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int a = 0;
	printf("Enter your age ");
	scanf_s("%d",&a);
	ageCheck(a);
	return 0;
}