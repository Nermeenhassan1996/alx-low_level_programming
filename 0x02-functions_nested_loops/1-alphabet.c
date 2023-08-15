#include "main.h"

/*
 * function for printing the alphabet in lower case
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for(; i <= 25; i++)
	{
		_putchar(alphabet[i]);
	}

	_putchar('\n');
}
