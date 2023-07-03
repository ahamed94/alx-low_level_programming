#include "main.h"

/**
 * print_diagsums - prints sum of diags
 * @a: ptr to 2d array
 * @size: size of array
 *
 * Return: None
 */

void print_diagsums(int *a), int size)
{
	int tRight = 0, tLeft = 0;

	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		tRight += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		tLeft += a[i];
	}

	printf("%d, %d\n", tRight, tLeft);
}
