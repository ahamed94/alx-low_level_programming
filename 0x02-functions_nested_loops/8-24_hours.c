#include "main.h"

/**
 * print_last_digit - prints last digit of a #
 * @n: Number to get last digit
 * Return: Last digit
 */

void jack_bauer(void)
{
	int  i, j1, j2;

	for (i = 0; i < 24; i++)
		for (j1 = 0; j1 < 6; j1++)
			for (j2 = 0; j2 < 10; j2++)
			{
				if (i < 10)
					_putchar('0');
				_putchar(i);
				_putchar(':');
				_putchar(j1);
				_putchar(j2);
				_putchar('\n');
			}	
}
