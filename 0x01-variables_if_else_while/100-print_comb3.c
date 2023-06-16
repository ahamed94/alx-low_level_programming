#include <stdio.h>

/**
 * main - Has to start here
 * Return: Returns 0 when successful
 */
int main()
{
	int one;
	int two;

	for (one = 0; one < 10; one++)
	{
		for(two = 1 + one; two < 10; two++)
		{
			putchar(one % 10 + '0');
			putchar(two % 10 + '0');
			if (one == 8 && two == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return 0;
}
