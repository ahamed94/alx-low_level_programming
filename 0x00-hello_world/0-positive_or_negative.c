#include <stdlib.h>
#include <time.h>

/**
 * main - That's where program starts
 * Return: Returns 0 when complete
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%d is zero", &n);
	else if (n > 0)
		printf("%d is positive", &n);
	else
		printf("%d is negative", &n);
	printf("\n");
	return (0);
}
