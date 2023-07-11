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
	int i;

	if (size <= 0)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL)
		return (NULL);

	while (i < (int)size) /* set array values to char c */
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
