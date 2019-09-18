#include <iostream>
#include "task1.h"

using namespace std;

int main() {

    int age = 0;
    cout << "Введите возраст: \n";
    cin >> age;
    if (ageCheck(age) == 1){
        cout << "Access granted";
    }
    else {
        cout << "Access denied";
    }
    return 0;
}