#include "main.h"

/**
 * times_table - check description
 * Description: prints 9 times table
 * Return: nothing
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	for (; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int result = i * j;

			if ((result / 10) > 0)
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
			if (j == 9)
				continue;
			_putchar(',');
			_putchar(' ');
			if ((((j + 1) * i) / 10) < 1)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
