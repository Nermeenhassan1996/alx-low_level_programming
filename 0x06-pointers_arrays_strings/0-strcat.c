#include "main.h"

/**
 * _strcat - check description
 * Description: function to concatenate two strings.
 * @dest: an input string
 * @src: an input string
 * Return: pointer of the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
