#include "main.h"

/**
 * print_diagonal - prints
 * @n: number of _
 * Return: None
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}

		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
