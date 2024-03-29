#include "main.h"

/**
 * _isalpha - Determines whether alpha
 * @c: char to be checked
 *
 * Return: 1 if alphabet, 0 if otherwise
 */

int _isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}
