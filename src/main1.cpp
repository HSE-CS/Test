#include "task1.h"


int main(){
	int age;
	printf("Please enter your age here: ");
	scanf("%d", &age);
	if (ageCheck(age) == 1)
		printf("Access granted");
	else
		printf("Access denied");
	return 0;
}
