//#include "task1.h"
// написать программу, определяющую, какое самое маленькое 
// положительное целое число делитсяна все счисла из 
// диапазона [1...20] без остатка

// unsigned long findValue(unsigned int min,unsigned int max)

//#include <iostream>
#include "task1.h"

//using namespace std;

int main() {
	unsigned int min, max;
	//cout << "Input min: ";
    //cin >> min;
    //cout << "Input max: ";
    //cin >> max;
    min = 1;
    max = 20;
    int res = findValue(min, max);
	cout << res;
	cout << "\n";
}