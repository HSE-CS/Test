//
//  main.cpp
//  18.09 prakt
//
//  Created by Андрей Журавлев on 18/09/2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//B54

#include <iostream>
#include "task1.h"
using namespace std;

int main(int argc, const char * argv[]) {
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if (ageCheck(age)) {
        cout << "Access granted" << endl;
    } else {
        cout << "Access denied" << endl;
    }
}
