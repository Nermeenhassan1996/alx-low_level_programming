#include "main.h"

/**
 * rev_string - check description
 * Description: function that prints every other character
 * @s: an input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	for (; i < len; i+=2)
		_putchar(str[i]);

	_putchar('\n');
}
