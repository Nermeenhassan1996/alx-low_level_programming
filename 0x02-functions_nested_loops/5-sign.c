#include "main.h"

/**
 * print_sign - check description
 * @n: an integer input
 * Description: checks if the inout number is positive, negative or zero
 * Return: 1 if positive number, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
