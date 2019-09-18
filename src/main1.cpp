//
// Created by Илья Соловьёв on 18/09/2019.
//
#include "task1.cpp"
#include <iostream>

using namespace std;

int main() {
    cout << "Hello! Enter your age\n";
    int age = 0;
    cin >> age;
    if (ageCheck(age)) {
        cout << "Access granted\n";
    } else {
        cout << "Access denied\n";
    }
    return 0;
}