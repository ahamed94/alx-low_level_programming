#include "main.h"

/**
 * _abs - Returns absolute value
 * @n: Number to get abs value for
 * Return: Abs value
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
