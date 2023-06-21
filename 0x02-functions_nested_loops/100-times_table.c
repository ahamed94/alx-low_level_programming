#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints time table
 * @n: max
 * Return: None
 */

void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n < 0)
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if(j != 0)
					if (i * j < 1000)
					{
						printf(" ");
						if (i * j < 100)
						{
							printf(" ");
							if (i * j < 10)
								printf(" ");
						}
					}
				printf("%d", i*j);
			}
			printf("\n");
		}
}
