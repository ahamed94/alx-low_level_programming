#include <stdio.h>

/**
 * main - Has to start here
 * Return: Returns 0 when successful
 */
int main(void)
{
	int one;
	int two;
	int three;

	for (one = 0; one < 10; one++)
	{
		for(two = 1 + one; two < 10; two++)
		{
			for (three = 1 + two; three < 10; three++)
			{
				putchar(one % 10 + '0');
				putchar(two % 10 + '0');
				putchar(three % 10 + '0');
				if (one == 7 && two == 8 && three == 9)
					break;
			       	putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
