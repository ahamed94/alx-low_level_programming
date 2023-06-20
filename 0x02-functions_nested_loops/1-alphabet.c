#include "main.h"

/**
 * main - Has to start here
 * Return: Returns 0 when successful
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return(0);
}

void print_alphabet(void)
{
	char a = 'a';
	while (a <= 'z')
		_putchar(a++);
		
	return;
}
