#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

// Add custom changes
// to calculator.cpp file 
//after executing cherry-pick
int Calculator::Div (double a, double b)
{
	return a / b + 0.5;
}
