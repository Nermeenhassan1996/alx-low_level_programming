#include <stdio.h>

/**
 * main - check program
 * Return: always returns 0
*/
int main(void)
{
	long i = 3, n = 612852475143;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	printf("%lu\n", n);
	return (0);
}
