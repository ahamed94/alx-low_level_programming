#include "main.h"

/**
 * _memset - similar to memset
 * @s: ptr to where to start allocation
 * @b: size per unit
 * @n: total ig
 *
 * Return: ptr to where it starts
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n, i;

	if (size > 0)
		for (i = 0; i < size; i++)
			s[i] = b;

	return (s);
}
