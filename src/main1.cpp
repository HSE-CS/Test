// main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "task1.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{

	
	setlocale(LC_ALL, "Rus");
	printf("Введите ваш возраст!");
	int root;
	scanf_s("%d", &root);
	int n;
	n=ageCheck(root);
	printf("%d", n);

};
