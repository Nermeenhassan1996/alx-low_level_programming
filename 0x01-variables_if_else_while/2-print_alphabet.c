#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
