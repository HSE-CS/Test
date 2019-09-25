#include "task1.h"

/*unsigned long findValue(unsigned int min,unsigned int max)
{
	unsigned int num = 1, len = 0, test = 0;
	unsigned int x, res;

	for (x = min; x <= max; x++)
	{
		num *= x;
		len++;
	}

	for (num; num > min - 1; num--)
	{
		cout << num;
		cout << "\n";
		test = 0;
		for (x = min; x <= max; x++)
			if (num % x == 0)
				test++;
			else {
				test = -1;
				break;
			}
		if (test == len)
			res = num;
		
	}

	return res;
}*/


unsigned long findValue(unsigned int min,unsigned int max)
{
	const int N = 10;
	int arr[N], num;
	for (int i = 0; i < max; i++)
		arr[i] = i+1;
}
