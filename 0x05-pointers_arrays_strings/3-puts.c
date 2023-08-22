#include "main.h"

/**
 * _puts - check descriprion
 * Description: function that prints a string
 * followed by a new line
 * @str: an input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
