#include "main.h"

/**
 * create_array - creates array
 * @size: size of array
 * @c: character to init array
 *
 * Return: ptr to array or null if fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size > 0)
	{
		ptr = malloc(sizeof(*ptr) * size);
		*ptr = c;
		return (ptr);
	}

	else
		return (NULL);
}
