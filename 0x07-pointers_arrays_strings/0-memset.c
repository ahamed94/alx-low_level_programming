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
	return (memset(s, b, n));
}
