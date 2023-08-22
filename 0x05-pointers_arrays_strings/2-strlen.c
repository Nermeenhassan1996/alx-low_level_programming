#include "main.h"

/**
 * _strlen - check description
 * Description: function that returns the length of string
 * @s: an input string pointer
 * Return: Nothing
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
