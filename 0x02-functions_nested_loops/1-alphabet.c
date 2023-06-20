#include "main.h"

/**
 * print_alphabet - Prints alphabet a->z
 * Return: 0
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
		_putchar(a++);
	_putchar('\n');
}
