

#include <iostream>
#include "task1.h"
int main()
{
	int a;
   std:: cin >> a;  
  
	   if (ageCheck(a))
		   std::cout << "Access granted" << std::endl;
	   else
		   std::cout << "Access denied" << std::endl;
   
}

