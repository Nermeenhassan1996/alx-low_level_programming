#include "main.h"

/**
 * more_numbers - check description
 * Description: print numbers from 0 to 9
 * except for 2 and 4
 * Return: nothing
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				_putchar('0' + j);
			else
			{
				_putchar('1');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
