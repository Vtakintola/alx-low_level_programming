#include "main.h"

/**
 *print_to_98 - a function that prints out natural numbers
 *@n: number to start from
 *
 *Return: returns the sum of a and b.
 */

void print_to_98(int n);
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				if (i == 98)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			if (i == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

