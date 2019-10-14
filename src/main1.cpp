#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
int main() {
	int a, b;
	printf("Enter your age\n");
	scanf("%d", &a);
	b = ageCheck(a);
	if (b == 1) {
		printf("Access granted");
	}
	else {
		printf("Access denied");
	}
	return 0;
}