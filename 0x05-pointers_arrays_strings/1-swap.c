#include "main.h"

/**
 * swap_int - check description
 * Description: function that will swap 2 given pointers
 * @a: an inout integer pointer
 * @b: an input integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
