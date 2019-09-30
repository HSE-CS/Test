#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
 
int ageCheck(int age);

int main() {
	int age = 0;
	int a = 0;
	printf("Enter your age \n");
	scanf("%i", &age);
	a = ageCheck(age);
	if (a == 0) {
		printf("Access denied \n");
	}
	else {
		printf("Access granted \n");
	}
    return 0;
}