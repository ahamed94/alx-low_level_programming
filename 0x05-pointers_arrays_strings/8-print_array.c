#include "main.h"

/**
 * print_array - Prints nums from array
 * @a: pointer to array
 * @n: num of slots to print
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
