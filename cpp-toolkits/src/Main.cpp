#include "Timing.h"

#include <iostream>

// Demo for Timer
void PrintFunction(int N)
{	
	cytools::Timer timer;
	for (int i = 0; i < N; i++)
		std::cout << "Hello!\n";// << std::endl;
}

int main()
{
	// Timer Demo
	PrintFunction(100);
	std::cin.get();
}