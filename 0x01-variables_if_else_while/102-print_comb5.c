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
	int p;

	for (n = 0; n < 99; n++)
	{
		for (p = 1; p < 100; p++)
		{
			if (n == p || n > p)
				continue;
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(p / 10 + '0');
			putchar(p % 10 + '0');
			if (n == 98 && p == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
