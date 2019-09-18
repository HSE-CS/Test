#include<iostream>
#include "task1.h"
int main(){
    int age;
    std::cin>>age;
    std::cout<<ageCheck(age)?"Access granted":"Access denied";
    return 0;
}
