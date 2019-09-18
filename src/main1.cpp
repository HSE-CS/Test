#include <iostream>
#include "task1.h"
using namespace std;

int main() {
    cout << "Please, input your age: ";
    int age;
    try {
        cin >> age;
    }
    catch(exception& e)
    {
        cerr << e.what() << endl;
        return -1;
    }
    cout << "ageCheck(" << age << ") = " << ageCheck(age) << endl;
    return 0;
}