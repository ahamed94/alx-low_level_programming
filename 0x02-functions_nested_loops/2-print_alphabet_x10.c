#include "main.h"

/**
 * print_alphabet_x10 - Prints 10x times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
			_putchar(c);

		_putchar('\n');
		i++;
	}
}
