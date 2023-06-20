#include <stdio.h>
#include "main.h"

/**
 * _islower - Determines whether Capital
 * @c: char to be checked
 * Return: 1 if lowercase, 0 if otherwise
 */

void print_to_98(int n)
{
	printf("%d", n);
	if(n < 98)
		while(n < 98)
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
