#include "main.h"

/**
 * rev_string - Rev a string
 * @s: String
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i = strlen(s), j = 0;
	char *tmp[i];

	strcpy(tmp, s);

	while (i >= 0)
		*(s + j++) = *(tmp + --i);
}
