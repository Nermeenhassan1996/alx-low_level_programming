#include "main.h"

/**
 * _strcpy - check description
 * Description: function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		if (src[index] == '\0')
			break;

		dest[index] = src[index];
		index++;
	}

	return (dest);
}
