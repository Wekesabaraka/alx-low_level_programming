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
	int m, p, k;

	for (m = '0'; m < '9'; m++)
	{
		for (p = m + 1; p <= '9'; p++)
		{
			for (k = p + 1; k <= '9'; k++)
			{
				if ((p != m) != k)
				{
					putchar(m);
					putchar(p);
					putchar(k);

					if (m == '7' && p == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
