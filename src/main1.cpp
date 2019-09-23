#include <iostream>
#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS

void main() {
	int a = 0;
	printf("Enter your age ");
	scanf_s("%d",&a);
	if(ageCheck(a)){
	printf("Access granted");
	}
    else{
	printf("Access denied");
	}
}