#include "main.h"
/**
 * print_square - a function that prints a square.
 * @size: size of the square
 * Return: returns void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
