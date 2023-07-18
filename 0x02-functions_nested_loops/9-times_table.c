#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *
 * Return: Always returns 0.
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar(k % 10 + '0');
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
				if (j == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
