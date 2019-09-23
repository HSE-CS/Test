#include <iostream>
using namespace std;

int ageCheck(int age) {
	if (age < 18) {
		return 0;
	}
	else {
		return 1;
	}
}