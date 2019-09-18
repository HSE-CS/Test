#include <iostream>
#include "task1.h"
using namespace std;

int main() {
    int age=0;
    cout << "Enter your age";
    cin >> age;
    if (ageCheck(age)){
        cout << "Access granted";
    }
    else {
        cout <<"Access denied";
    }
    return 0;
}
