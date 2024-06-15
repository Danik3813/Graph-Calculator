#include <iostream>
#include "calc.h"
int main()
{
	Calc<int>* A = new Calc<int>();
	int C = A->Difference(5, 4);
	std::cout << C << std::endl;
	delete A;
	return 0;
}

