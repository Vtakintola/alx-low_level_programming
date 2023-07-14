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
	char n = 'a';
	char p = 'A';

	for (n; n <= 'z'; n++)
		putchar(n);
	for (p; p <= 'Z'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
