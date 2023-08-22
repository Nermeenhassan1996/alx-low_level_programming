#include "main.h"


/**
 * puts_half - check description
 * Description: function that prints half of character
 * folowed by new line
 * @str: an input string
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	for (; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
