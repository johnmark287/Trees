#include "main.h"
int main(void)
{
	int n;
	int fibonacci;

	n = 5;
	fibonacci = fib(n);
	printf("Fibonacci %d is: %d\n", n, fibonacci);
	return (0);
}
