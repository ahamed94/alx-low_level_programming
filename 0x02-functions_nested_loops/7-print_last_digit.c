#include "main.h"

/**
 * print_last_digit - prints last digit of a #
 * @n: Number to get last digit
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m *= -1;
	_putchar(m + '0');
	return (m);
}
