#include "main.h"

/**
 * rev_string - check description
 * Description: reverses a given string
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	while (s[len] != '\0')
		len++;

	for (; i < len; i++)
	{
		if (i >= (len - (i + 1)))
			break;
		
		temp = s[i];
		s[i] = s[len - (i + 1)];
		s[len - (i + 1)] = temp;
	}
}
