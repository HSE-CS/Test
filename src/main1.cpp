//
// Created by Оксана on 23.09.2019.
//
#include "task1.h"
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (ageCheck(n)) {
        cout << "Access granted";
    } else {
        cout << "Access denied";
    }
}

