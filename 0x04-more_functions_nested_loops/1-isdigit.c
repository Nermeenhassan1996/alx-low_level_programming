#include "main.h"

/**
 * _isdigit - check description
 * @c: an integer input
 * Description: Check for if the input character
 * is digit or not
 * Return: 1 for true, 0 for false
*/
int _isdigit(int c)
{
	int isDigit = 0;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			isDigit = 1;
			break;
		}
	}

	return (isDigit);
}
