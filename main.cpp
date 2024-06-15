#include <iostream>
#include "calc.h"
int main()
{
	Calc<int>* A = new Calc<int>();
	delete A;
	return 0;
}