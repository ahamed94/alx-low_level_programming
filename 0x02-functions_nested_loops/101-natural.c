#include <stdio.h>

/**
 * main - Has to start here
 * Return: Returns 0 when successful
 */

int main (void)
{
	int sum = 0, i;

	for(i = 1023; i > 2; i--)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return(0);
}
