#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "task1.cpp"

int main() {
  int check, age;
  cin >> age;
  check = ageCheck(age);
  if (check == 1) {
    cout << "Access granted";
  } else {
    cout << "Access denied";
  }
  return 0;
}
