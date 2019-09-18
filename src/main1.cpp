#include <iostream>
#include "task1.h"
using namespace std;
int ageCheck(int);
int main()
{
    int age;
    cout << "Input your age here"<<'\n';
    cin >> age;
    cout<<(ageCheck(age)?"Access granted":"Access denied");
    return 0;
}
