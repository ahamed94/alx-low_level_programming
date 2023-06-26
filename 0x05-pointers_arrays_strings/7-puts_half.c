#include "main.h"

/**
 * puts_half - prints 2nd half
 * @str: String
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int size = strlen(str) - 1, i;

	i = (size + size % 2) / 2;

	while (i < size)
		printf("%c", *(str + i++));

	printf("\n");
}
