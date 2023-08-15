#include "main.h"

/**
 * print_last_digit - chech description
 * @n: an integer input
 * Description: prints and returns the last digit of a number
 * Return: integer value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		n = n * -1;

	lastDigit = n % 10;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
