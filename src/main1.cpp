
#include <iostream>
#include "task1.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {
    int age;
    cout << "Hello! Please, enter your age.\n";
    cin >> age;
    if (ageCheck(age)) {
        cout <<"Access granted";
        }
    else {
        cout << "Access denied";
        }
}
