#include "task1.h"


void main(){
	int age;
	printf("Pleasem enter your age here: ");
	scanf("%d", &age);
	if (ageCheck(age) == 1)
		printf("Access granted");
	else
		printf("Access denied");
}
