#include "main.h"

/**
 * print_diagonal - prints
 * @n: number of _
 * Return: None
 */

void print_diagonal(int n)
{
	if (n <= 0)
		printf("\n");

	else
	{
		printf("\\");
		print_diagonal(n - 1);
	}
}
