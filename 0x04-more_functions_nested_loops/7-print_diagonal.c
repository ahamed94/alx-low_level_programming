#include "main.h"

/**
 * print_diagonal - prints
 * @n: number of _
 * Return: None
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		_putchar('\\');
		print_diagonal(n - 1);
	}
}
