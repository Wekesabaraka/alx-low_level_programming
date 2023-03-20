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
	char lowercase;

	for (lowercase = 'k'; lowercase >= 'a'; lowercase--)
		putchar(lowercase);
		putchar('\n');

	return (0);
}
