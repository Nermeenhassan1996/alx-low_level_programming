#include "main.h"

/**
 * reverse_array - check description
 * Description: function to reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
