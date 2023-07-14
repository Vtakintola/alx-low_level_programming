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
	char n;
	char p;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	for (p = 'A'; p <= 'Z'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
