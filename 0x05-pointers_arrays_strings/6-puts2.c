#include "main.h"

/**
 * puts2 - prings every other
 * @str: String
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i, size = strlen(str);

	for (i = 0; i < size; i++)
		printf("%c", *(str +  i++));

	printf("\n");
}
