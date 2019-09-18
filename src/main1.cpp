#include <iostream>
#include "task1.h"

int main(){
    int age = 0;
    std::cout << "Enter your age" << std::endl;
    std::cin >> age;
    if ((ageCheck(age)) == 1){
        std::cout << "Access granted";
    }
    else{
        std::cout << "Access denied";
    }
    return 0;
}