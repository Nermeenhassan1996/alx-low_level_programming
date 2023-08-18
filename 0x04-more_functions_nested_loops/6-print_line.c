#include "main.h"

/**
 * print_line - check description
 * @n: an integer input
 * Description: draws a line
 * Return: nothing
*/
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
