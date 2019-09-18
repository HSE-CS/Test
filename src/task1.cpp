#define _CRT_SECURITY_NO_WARNINGS
#include <iostream>
#include "task.h"

int ageCheck(int age) {
  if (age < 18) {
    return 0;
  } else {
    return 1;
  }
}
