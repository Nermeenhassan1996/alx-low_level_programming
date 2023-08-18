#include "main.h"

/**
 * _isupper - check description
 * @c: an integer input
 * Description: Check for if the input character
 * is uppercase or not
 * Return: 1 for true, 0 for false
*/
int _isupper(int c)
{
	int isUpper = 0;
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			isUpper = 1;
			break;
		}
	}

	return (isUpper);
}
