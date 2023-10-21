#include "main.h"

int fibonacci_iteration(int n)
{
	int i, fib1, fib2, result;

	fib1 = fib2 = 1;
	for (i = 0; i < (n - 2); i++)
	{
		result = fib1 + fib2;
		fib1 = fib2;
		fib2 = result;
	}
	return (result);
}
