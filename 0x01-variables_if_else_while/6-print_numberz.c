#include <stdio.h>

/**
 * main - Has to start here
 * Return: Returns 0 when successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i % 10 + '0');
	putchar('\n');
	return (0);
}
