#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
 *
 * Return: 0 on success
 */
int main(void)
{
	char alphabetL[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetU[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabetL[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alphabetU[i]);
	}
	putchar('\n');
	return (0);
}
