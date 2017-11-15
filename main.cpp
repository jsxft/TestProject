#include <iostream>
#include <unistd.h>
#include <stdlib.h>

int calc(int x)
{
	usleep(rand() % 1000000);
	return 2 * x;
}

int main()
{
	for (int x = 0; x < 10; ++x)
		std::cout << calc(x) << std::endl;
	
	return 0;
}