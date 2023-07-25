#include "main.h"

/**
 * print_rev - a function that prints a string.
 * @s: sting to be printed.
 * Return: reurns void.
 */

void print_rev(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	for (i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
