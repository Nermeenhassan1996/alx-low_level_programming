#include "main.h"

/**
 * main - prints the word _putchar .
 *
 * Return: 0 on success
 */
int main(void)
{
	char word[] = "_putchar";

	for (int i = 0; i <= 7; i++)
	{
		_putchar(word[i]);
	}

	_putchar('\n');
	return (0);
}
