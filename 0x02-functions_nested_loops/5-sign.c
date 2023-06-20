#include "main.h"

/**
 * print_sign - detemine whether +ve/-ve/zero
 * @n: Number to check
 *
 * Return: 1 if +ve, 0 if zero, -1 if -ve
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
