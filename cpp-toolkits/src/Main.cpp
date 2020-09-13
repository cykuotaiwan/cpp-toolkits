#include "Timing.h"

#include <iostream>

// Demo for Timer
void PrintFunction(int N)
{	
	cytools::Timer timer("PrintFunction");
	for (int i = 0; i < N; i++)
		std::cout << "Hello!\n";
}
void PrintFunction2(int N)
{
	cytools::InstrumentationTimer it(__FUNCSIG__);
	for (int i = 0; i < N; i++)
		std::cout << "Hello!\n";
}

int main()
{
	// Timer Demo
	//PrintFunction(1000);
	// Timer v2 Demo
	cytools::Instrumentor::Get().BeginSession("Profiling");
	PrintFunction2(1000);
	cytools::Instrumentor::Get().EndSession();

	std::cin.get();
}