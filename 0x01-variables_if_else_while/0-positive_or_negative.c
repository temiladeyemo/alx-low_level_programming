#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Prints whether the random number stored in n is positive or negative
 *Return: always return 0 for a successfully ran code
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
