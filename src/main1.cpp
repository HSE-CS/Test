#define _USE_CRT_NO_WANINGS
#include <stdio.h>
#include "task1.h"

int main() {
	int age;
	scanf("%d", age);
	if (ageCheck(age)) {
		printf("Access granted");
	}
	else {
		printf("Access denied");
	}
	return 0;
}