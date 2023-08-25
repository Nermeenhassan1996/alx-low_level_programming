#include "main.h"

/**
 * _strncpy - check description
 * Description: function to copy strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: pointer of the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0;
	int i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
