#include <stdio.h>

/**
 * main - Has to start here
 * Return: Returns 0 when successful
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
