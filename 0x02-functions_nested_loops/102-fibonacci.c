#include <stdio.h>

/**
 * main - Has to start here
 * Return: Returns 0 when successful
 */

int main(void)
{
	long int s1 = 1, s2 = 2, tmp;
	int i;

	printf("1, 2, ");
	for (i = 2; i <= 50; i++)
	{
		tmp = s1 + s2;
		s1 = s2;
		s2 = tmp;
		printf("%ld, ", s2);
	}
	printf("\n");
	return (0);
}
