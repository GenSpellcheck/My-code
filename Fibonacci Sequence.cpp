#include "stdafx.h"
#include <iostream>

int x1 = 0;
int x2 = 1;

int main()
{
	for(int i = 0; i < 10; i++)
	{
		std::cout << x1 << std::endl;
		std::cout << x2 << std::endl;

		x1 += x2;
		x2 += x1;
	}
    return 0;
}



