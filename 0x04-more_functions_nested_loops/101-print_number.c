#include "main.h"
void print_int(int n);

/**
 * print_number - function to prints an integer.
 * @n: an integer input
 * Return: nothing
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_int(n * -1);
	}
	else
		print_int(n);
}

/**
 * print_int - function to print n
 * @n: an integer input
 * Return: nothing
 */
void print_int(int n)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
	{
		if (n / i != 0)
			_putchar((n / i) % 10 + '0');
	}
}
