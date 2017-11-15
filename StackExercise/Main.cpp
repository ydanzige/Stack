#include <iostream>
#include "IntStack.h"

void main()
{
	StackExercise::IntStack<int> si;
	StackExercise::IntStack<double> sd;

	si.Push(1);
	si.Push(2);
	si.Push(3);
	std::cout << si.Pop() << std::endl;

	sd.Push(1.1);
	sd.Push(2.1);
	sd.Push(3);
	std::cout << sd.Pop() << std::endl;

	// ...
}