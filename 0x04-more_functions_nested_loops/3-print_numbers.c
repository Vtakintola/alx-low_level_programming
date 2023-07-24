#include "main.h"

/**
 * print_numbers - a funtion that prints digits 0 to 9
 *
 * Return: returns void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
