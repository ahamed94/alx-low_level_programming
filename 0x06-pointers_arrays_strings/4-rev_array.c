#include "main.h"

/**
 * reverse_array - Reverse array of ints
 * @a: ptr to array
 * @n: size of array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
