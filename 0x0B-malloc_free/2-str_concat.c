#include "main.h"

/**
 * str_concat - concatenates 2 str in new one
 * @s1: first str
 * @s2: second str
 *
 * Return: ptr to array or null if fails
 */

char *str_concat(char *s1, char *s2)
{
	int size = 0, i = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		size++, i++;
	i = 0;

	while (*(s2 + i))
		size++, i++;
	size++;

	*ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	strcat(ptr, s1);
	strcat(ptr, s2);

	return (ptr);
}
