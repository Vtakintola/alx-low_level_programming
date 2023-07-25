#include "main.h"

/**
 * print_rev - a function that prints a string.
 * @s: sting to be printed.
 * Return: reurns void.
 */

void print_rev(char *s)
{
	int i = _strlen(*s);

	for (i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
