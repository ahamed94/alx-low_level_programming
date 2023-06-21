#include <stdio.h>

/**
 * main - Has to start here
 * Return: Returns 0 when successful
 */

int main(void)
{
	int s1 = 1, s2 = 2, i, tmp;

	printf("1, 2, ");
	for (i = 2; i <= 50; i++)
	{
		tmp = s1 + s2;
		s1 = s2;
		s2 = tmp;
		printf("%d, ", s2);
	}
	printf("\n");
	return (0);
}
