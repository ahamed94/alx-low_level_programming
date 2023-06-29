#include "main.h"

/**
 * string_toupper - switches all charas to caps
 * @str: string to change
 *
 * Return: Ptr to string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96)
			str[i] -= 32;
	}

	return (str);
}
