unsigned long long int fact(unsigned long long int n)
{
	if (n == 1)
		return (1);
	return (n * fact(n - 1));
}
