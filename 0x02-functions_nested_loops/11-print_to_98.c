#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: Number to count from
 * Return: Nothing
 */

void print_to_98(int n)
{
	printf("%d", n);
	if (n < 98)
		while (n < 98)
		{
			printf(", ");
			printf("%d", ++n);
		}
	else
		while (n > 98)
		{
			printf(", ");
			printf("%d", --n);
		}
	printf("\n");
}
