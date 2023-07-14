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
	int m;

	for (n = 0; n < 8; n++)
	{
		for (p = 1; p < 9; p++)
		{
			for (m = 2; m < 10; m++)
			{
				if (n == p || n == m || m == p)
					continue;
				if (n > p || p > m || n > m)
					continue;
				putchar(n % 10 + '0');
				putchar(p % 10 + '0');
				putchar(m % 10 + '0');
				if (n == 7 && p == 8 && m == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
