#include <iostream>
#include "task1.h"

int main(){
    int age;
    std::cin >> age;
    if(ageCheck(age)){
        std::cout << "Access granted";
    }
    else{
        std::cout << "Access denied";
    }
}