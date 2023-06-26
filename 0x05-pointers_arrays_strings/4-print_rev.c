#include "main.h"

/**
 * print_rev - String in reverse printed
 * @s: String
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
		printf("%c", *(s + i--));

	printf("\n");
}
