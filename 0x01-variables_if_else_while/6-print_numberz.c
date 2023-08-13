#include <stdio.h>
/**
 * main - prints the digits from 0 to 9.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
