#include <stdio.h>
#include "task1.h"

using namespace std;

int main(){
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	int answer = ageCheck(age);
	if (answer == 1){
		printf("Access granted");
	}
	else {
		printf("Access denied");
	}
}