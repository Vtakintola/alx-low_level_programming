#include "main.h"

/**
 * print_times_table - a function that prints the 9 times table, starting with 0.
 *
 * Return: Always returns void.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= n; i++)
	{
		for (j = n; j <= 9; j++)
		{
			k = i * j;
			if (k < 10)
			{
				if (j == 0)
				{
					_putchar(k % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_Putchar(' ');
					_putchar(k % 10 + '0');
				}
			}
			else if (k < 100) 
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else if(k > 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(k / 100 + '0');
				_putchar(((k / 10) % 10) + '0');
				_putchar(k % 10 + '0');
			}	
		_putchar('\n');
	}
}
