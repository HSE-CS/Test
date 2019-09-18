#include "stdafx.h"
#include "task1.h"
using namespace std;

int main()
{
	int age;
	int check;
	scanf("%d", &age);
	check = ageCheck(age);
	if (check == 1){
		printf("Access granted");
	}
	else{
		printf("Access denied");
	}
	return 0;
}

