#include "main.h"

/**
 * print_number - check description
 * @n: an integer input
 * Description: prints the given integer
 * Return: nothing
*/
void print_number(int n)
{
	int reversed = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n > 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}

	while (reversed > 0)
	{
		_putchar('0' + (reversed % 10));
		reversed /= 10;
	}
}
