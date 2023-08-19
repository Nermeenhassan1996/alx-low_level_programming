#include <stdio.h>

/**
 * main - check program
 * Return: always returns 0
*/
int main(void)
{
	unsigned long int i = 3, n = 612852475143, largestFactor = -1;

	while (n % 2 == 0)
	{
		largestFactor = 2;
		n /= 2;
	}

	for (; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largestFactor = i;
			n /= i;
		}
	}

	printf("%lu\n", largestFactor);
	return (0);
}
