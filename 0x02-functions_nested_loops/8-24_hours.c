#include "main.h"

/**
 * jack_bauer - prints minutes in 24hrs
 * Return: None
 */

void jack_bauer(void)
{
	int  i1, i2, j1, j2;

	for (i1 = 0; i1 < 3; i1++)
		for (i2 = 0; i2 < 10; i2++)
		{
			if (i1 == 2 && i2 == 4)
				break;
			for (j1 = 0; j1 < 6; j1++)
				for (j2 = 0; j2 < 10; j2++)
				{
					_putchar(i1 + '0');
					_putchar(i2 + '0');
					_putchar(':');
					_putchar(j1 + '0');
					_putchar(j2 + '0');
					_putchar('\n');
				}
		}
}
