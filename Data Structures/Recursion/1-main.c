#include "main.h"
int main(void)
{
	int n;
	int fibonacci;

	n = 3; /* Valid for 0 < n < 47 */
	fibonacci = fib(n);
	printf("Fibonacci %d is: %d\n", n, fibonacci);
	return (0);
}
