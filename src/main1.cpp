#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"


int main() {
	int a;
	printf("Enter your age ");
	scanf("%d", &a);
	if (ageCheck(a)) {
		printf("Access granted");
	}
	else {
		printf("Access denied");
	}
	return 1;
}
