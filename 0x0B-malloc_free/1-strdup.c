#include "main.h"

/**
 * _strdup - similiar to strdup
 * @str: str to copy
 *
 * Return: ptr to array or null if fails
 */

char *_strdup(char *str)
{
	char *ptr;

	if (*str == NULL)
		return (NULL);
	*ptr = strdup(str);

	return (ptr);
}
