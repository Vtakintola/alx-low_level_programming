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

	for (n = 0; n < 9; n++)
	{
		for (p = 1; p < 10; p++)
		{
			if (n == p || n > p)
				continue;
			putchar(n % 10 + '0');
			putchar(p % 10 + '0');
			if (n == 8 && p == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
