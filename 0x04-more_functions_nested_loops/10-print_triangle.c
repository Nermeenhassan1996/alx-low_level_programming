#include "main.h"

/**
 * print_triangle - check description
 * @size: an integer input
 * Description: draws a triangle
 * Return: nothing
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}

			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
