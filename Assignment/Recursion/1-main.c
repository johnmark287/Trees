#include "main.h"

int main(void)
{
	int n, fibonacci;

	/* Valid for 0 < n < 47 */
	printf("Enter value of n: ");
	scanf("%d", &n);

	fibonacci = fib(n);
	printf("Fibonacci of %d by recursion is: %d.\n", n, fibonacci);

	fibonacci = fibonacci_iteration(n);
	printf("Fibonacci of %d by iteration is: %d.\n", n, fibonacci);
	return (0);
}
