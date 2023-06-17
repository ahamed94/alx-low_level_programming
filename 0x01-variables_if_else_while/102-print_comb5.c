#include <stdio.h>

/**
 * main - Has to start here
 * Return: Returns 0 when successful
 */
int main(void)
{
	int one1;
	int two1;
	int one2;
	int two2;

	for (one1 = 0; one1 < 10; one1++)
	{
		for (two1 = 0 ; two1 < 10; two1++)
		{
			for (one2 = 0 + one1; one2 < 10; one2++)
			{
				for (two2 = 1 + two1; two2 < 10; two2++)
				{
					putchar(one1 % 10 + '0');
					putchar(two1 % 10 + '0');
					putchar(' ');
					putchar(one2 % 10 + '0');
					putchar(two2 % 10 + '0');
					if (one1 == 9 && two1 == 8 && one2 == 9 && two2 == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
