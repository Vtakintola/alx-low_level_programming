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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar(k);
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
			if (k < 10)
			{
				_putchar(' ');
			}
		}
	}
}
