#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>


#include "task1.h"

int main() {
	int x;
	scanf("%d", &x);
	if (ageCheck(x)) {
		printf("Access granted");
	}
	else {
		printf("Access denied");
	}

	return 1;
}