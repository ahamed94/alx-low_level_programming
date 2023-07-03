#include "main.h"

/**
 * _strpbrk - find str in string
 * @s: ptr to where to look
 * @accept: what to look for
 *
 * Return: ptr to where string starts
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
