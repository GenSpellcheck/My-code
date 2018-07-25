#include "stdafx.h"
#include <iostream>

int main()
{
	int count = 1;
	while (count <= 100)
	{
		if (count % 15 == 0)
			std::cout << "FizzBuzz\n";
		else if (count % 3 == 0)
			std::cout << "Fizz\n";
		else if (count % 5 == 0)
			std::cout << "Buzz\n";
		else
			std::cout << count << std::endl;
		count++;
	}
	return 0;
}


