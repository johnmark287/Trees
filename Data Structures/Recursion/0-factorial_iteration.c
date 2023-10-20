#include "main.h"

unsigned long long int factorial_by_iteration(unsigned long long int n)
{
	unsigned long long int i, size, result;

	size = n;
	result = 1;
	for (i = 0; i < size; i++)
	{
		if (n > 1)
			result *= n;
		n--;
	}
	return (result);
}
