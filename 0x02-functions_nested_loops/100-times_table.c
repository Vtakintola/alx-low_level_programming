#include "main.h"

/**
 * print_times_table - a function that .
 *@n: parametr to check
 * Return: Always returns void.
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k == 0)
				_putchar(k % 10 + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (k < 100)
					_putchar(' ');
				if (k < 10)
					_putchar(' ');
				if (k > 99)
					_putchar(k / 100 + '0');
				if (k > 9)
					_putchar(((k / 100) % 10) + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
