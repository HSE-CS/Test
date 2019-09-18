#include <stdio.h>
#include <iostream>
#include "task1.h"
using namespace std;
int main(){
	int n;
	cin >> n;
	if (ageCheck(int n) == 1){
		cout << "Access granted";
	}
	else{
		cout << "Access denied";
	}
}
