#include "main.h"

/**
 * print_line - a function that prints a atraight line
 * @n: the lenght of the line
 * Return: returns void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
