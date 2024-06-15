#include "calc.h"
template <typename T>
T Calc<T>::Sum(T a, T b)
{
	return a + b;
}

template<typename T>
T Calc<T>::Difference(T a, T b)
{
	return a - b;
}

template<typename T>
T Calc<T>::Product(T a, T b)
{
	return a * b;
}

template<typename T>
T Calc<T>::Division(T a, T b)
{
	if (b) return a / b;
	throw "Division by zero!";
}

template<typename T>
T Calc<T>::Exponentation(T a, T b)
{
	return pow(a, b);
}


