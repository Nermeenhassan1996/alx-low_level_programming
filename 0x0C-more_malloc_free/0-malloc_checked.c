#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check description
 * Description: a function that allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: pointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
