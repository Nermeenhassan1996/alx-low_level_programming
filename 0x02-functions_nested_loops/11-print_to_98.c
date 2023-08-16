#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check description
 * @n: an integer input
 * Description: retuns all natural numbers until 98
 * Return: nothing
 */
void print_to_98(int n)
{
	do {
		printf("%d", n);

		if (n > 98)
			n--;
		else if (n < 98)
			n++;
		else
			break;

		printf(", ");

		if (n == 98)
			printf("%d", n);

	} while (n != 98);
	printf("\n");
}
