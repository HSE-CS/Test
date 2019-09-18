#include<bits/stdc++.h>
#include "task1.h"
using namespace std;

int main(){
    int age;
    int check;
    std::cin>>age;
    check=ageCheck(age);
    if (check==1){
        cout<<"Access granted";
    }
    else{
        cout<<"Access denied";
    }
    return 0;
}

