#include "main.h"

/**
 * factorial - finds the factorial of n
 * @n: number tto find factorial to
 *
 * Return: factorial of number, -1 if error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
