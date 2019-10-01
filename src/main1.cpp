#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>
int main() {
	int age;
	scanf("%d", &age);
	if (ageCheck(age)) {
		printf("Access granted");
	}
	else printf("Access denied");
	return 0;
}