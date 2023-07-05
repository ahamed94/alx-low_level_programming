#include "main.h"

/**
 * _puts_recursion - pts in recursion
 * @s: ptr to str
 *
 * Return: None
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
