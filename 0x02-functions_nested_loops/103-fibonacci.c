#include <stdio.h>

/**
 * main - Has to start here
 * Return: Returns 0 when successful
 */

int main(void)
{
	long int s1 = 1, s2 = 2, tmp, sum = 0;
	int i;

	for (i = 0; i < 60; i++)
	{
		if (s1 > 4000000)
			break;
		if (s1 % 2 == 0)
			sum += s1;
	       tmp = s1 + s2;
	       s1 = s2;
	       s2 = tmp;
	}
	printf("%ld\n", sum);
	return (0);
}
