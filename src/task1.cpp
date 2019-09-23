#include <iostream>
int ageCheck(int age) {
	if (age >= 18) {
		printf("Access granted");
		return 1;
	}
	else {
		printf("Access denied");
		return 0;
	}
}