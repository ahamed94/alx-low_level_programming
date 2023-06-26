#include "main.h"

/**
 * swap_int - change value to 98
 * @a: pointer to int1
 * @b: pointer to int2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int *tmp;
	
	*tmp = *a;
	*a = *b;
	*b = *tmp;
}
