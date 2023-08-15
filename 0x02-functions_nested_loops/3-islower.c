#include "main.h"

/*
 * _islower - Check description
 * Description: checks if the c is lower case or not
 * Return: 1 if true 0 if false
 */

int _islower(int c)
{
	int isLower = 0;
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		if (i == c)
		{
			isLower = 1;
			break;
		}
	}

	return (isLower);
}
