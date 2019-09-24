#include "task1.h"

int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d", &age);

	if (ageCheck(age) == 0)
		printf("Access granted");
	else
		printf("Access denied");

	return 0;
}