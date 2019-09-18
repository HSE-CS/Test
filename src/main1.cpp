//
// Created by sodae on 18.09.2019.
//
#include <iostream>
#include "task1.h"
using namespace std;

int main(){
    int age;
    cout << "Print your age" << endl;
    cin >> age;
    if (ageCheck(age)) cout << "Access granted" << endl;
    else cout << "Access denied" << endl;
    return 0;
}