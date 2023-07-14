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
	int n;
	char p;

	for (n = 0; n <= 9; n++)
		putchar(n % 10 + '0');
	for (p = 'a'; p <= 'f'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
