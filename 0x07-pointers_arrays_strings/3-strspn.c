#include "main.h"

/**
 * _strspn - find str in string
 * @s: ptr to where to look
 * @accept: what to look for
 *
 * Return: # of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
