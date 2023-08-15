#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet in lowercase 10 times
 * fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int j = 0;

	for (; j <= 9; j++)
	{
		for (i = 0; i <= 25; i++)
		{
			_putchar(alphabets[i]);
		}
		_putchar('\n');
	}
}
