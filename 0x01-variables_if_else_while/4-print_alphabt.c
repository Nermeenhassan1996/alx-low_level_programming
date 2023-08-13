#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e.
 *
 * Return: 0 on success
 */
int main(void)
{
	char alphabetL[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 16)
			continue;
		putchar(alphabetL[i]);
	}
	putchar('\n');
	return (0);
}
