#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (k > 0)
		printf("%d is positive\n", k);
	else if (k == 0)
		printf("%d is zero\n", k);
	else
		printf("%d is negative\n", k);

	return (0);
}
