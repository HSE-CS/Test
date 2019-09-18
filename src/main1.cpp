#include <iostream>
#include "task1.h"
using namespace std;
int ageCheck(int);
int main()
{
    int age;
    char* str = "Input your age here";
    cout << str<<'\n';
    cin >> age;
    if (ageCheck(age)){
        cout<<"Access granted";
    }else{
        cout<<"Access denied";
    }
    return 0;
}
