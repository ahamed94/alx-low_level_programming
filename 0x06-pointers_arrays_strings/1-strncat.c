#include "main.h"

/**
 * _strncat - Concatinates two strings
 * @dest: first and source str
 * @src: to be added
 * @n: number of bytes from src
 *
 * Return: ptr to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
