#include "main.h"
int main(void)
{
	unsigned long long int n;
	unsigned long long int factorial;

	printf("Enter value of n: \n");
	scanf("%d", &n);

	factorial = fact(n);
	printf("Factorial by recursion: %d.\n", factorial);

	factorial = factorial_by_iteration(n);
	printf("Factorial by iteration: %d.\n", factorial);

	return (0);
}
