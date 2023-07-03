#include "main.h"

/**
 * _memcpy - copies value to array
 * @dest: ptr to where to start allocation
 * @src: ptr to wut to copy
 * @n: total size
 *
 * Return: ptr to where it starts
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
