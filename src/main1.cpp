#define _CRT_SECURE_NO_WARNINGS
#include "task1.h" //Программа
#include "stdafx.h"
#include "conio.h"
#include "locale.h"
#include "string.h"
#include "stdlib.h"
#include <time.h>


int main(){
	int age;
	scanf("%d", &age);
	int l = ageCheck(age);
	if (l==1){
		printf("Access granted");
	}
	else{
		printf("Access denied");
	}
	getch();
}