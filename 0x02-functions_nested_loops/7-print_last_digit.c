#include "main.h"

/**
 * print_last_digit - prints last digit of a #
 * @n: Number to get last digit
 * Return: Last digit
 */

int print_last_digit(int n)
{
	_putchar(n + '0');
	return (n % 10);
}
