#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - print the last digit of the number stored in the variable n.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int lastdigit;
	char string[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", string, n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("%s %d is %d and is 0\n", string, n, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit > 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", string, n, lastdigit);
	}
	return (0);
}
