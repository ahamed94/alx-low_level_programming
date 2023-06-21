#include <stdio.h>

/**
 * main - Has to start here
 * Return: Returns 0 when successful
 */

int main(void)
{
        long int s1 = 1, s2 = 2, tmp, sum = 0;
        int i;

        printf("1, 2, ");
        for (i = 2; i < 50; i++)
        {
		if (s1 + s1 < 4000000 && i%2 == 0)
			sum += s1 + s2;
                tmp = s1 + s2;
                s1 = s2;
                s2 = tmp;
                printf("%ld", s2);
                if (i < 49)
                        printf(", ");
        }
        printf("\n");
        return (0);
}
