#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int r, s;

	for (r = 0; r<= 98; r++)
	{
		for (s = r + 1; s <= 99; q++)
		{
			putchar((r / 10) + '0');
			putchar((r % 10) + '0');
			putchar(' ');
			putchar((s / 10) + '0');
			putchar((s % 10) + '0');

			if (r == 98 && s == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
