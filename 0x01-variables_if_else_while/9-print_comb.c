#include <stdio.h>
/**
 * main - prints the alphabet in reverse.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
