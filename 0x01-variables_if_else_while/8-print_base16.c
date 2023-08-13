#include <stdio.h>
/**
 * main - prints the alphabet in reverse.
 *
 * Return: 0 on success
 */
int main(void)
{
	char alphabet[] = "abcdef";
	int i = '0';

	for (; i <= '9'; i++)
	{
		putchar(i);
	}
	i = 0;
	for (; i <= 5; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
