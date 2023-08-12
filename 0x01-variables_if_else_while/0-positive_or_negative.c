#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		// is postive
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		// is zero
		printf("%d is zero", n);
	}
	else
	{
		// is negative
		printf("%d is negative", n);
	}
	return (0);
}
