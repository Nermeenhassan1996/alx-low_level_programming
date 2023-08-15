#include "main.h"

/**
 * _abs - check description
 * @n: an integer input
 * Description: returns the absolute value of an integer
 * Return: absolute integer value of an integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
