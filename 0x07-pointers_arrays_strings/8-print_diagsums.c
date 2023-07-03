#include "main.h"

/**
 * print_diagsums - prints sum of diags
 * @a: ptr to 2d array
 * @size: size of array
 *
 * Return: None
 */

void print_diagsums(int *a, int size)
{
	int i, j, tRight = 0, tLeft = 0;

	for (i = 0; i < size; i++)
	{
		tRight += a[i][i];
		tLeft += a[i][size - i - 1];
	}
	printf("%d, %d\n", tRight, tLeft);
}
