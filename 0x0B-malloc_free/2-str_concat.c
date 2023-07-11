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
	long int size = strlen(s1) + strlen(s2) + 1;
	char *ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	if (s1 == NULL && s2 == NULL)
		return (ptr);

	if (s1 == NULL)
		strcat(ptr, s2);

	else if (s2 == NULL)
		strcat(ptr, s1);

	else
	{
		strcat(ptr, s1);
		strcat(ptr, s2);
	}

	return (ptr);
}
