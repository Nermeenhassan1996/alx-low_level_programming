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
	int index = 0;
	int src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
