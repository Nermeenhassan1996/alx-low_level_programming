#include "main.h"

/**
 * _isalpha - check description
 * @c: an input character
 * Description: checks if input character is an alphabet
 * lowercase or uppercase
 * Return: 1 if the character is alphabet and 0 otherwise
 */
int _isalpha(int c)
{
	char isAlpha = 0;
	char i;

	for (i = 'A'; i <= 'z'; i++)
	{
		if (i == 'Z')
		{
			i += 6;
			continue;
		}

		if (i == c)
		{
			isAlpha = 1;
			break;
		}
	}

	return (isAlpha);
}
