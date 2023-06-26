#include "main.h"

/**
 * puts2 - prings every other
 * @str: String
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
		printf("%c", *(str +  i++));

	printf("\n");
}
