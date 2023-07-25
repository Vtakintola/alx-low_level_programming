#include "main.h"

/**
 * print_rev - a function that prints a string.
 * @s: sting to be printed.
 * Return: reurns void.
 */

void print_rev(char *s)
{
	int i;
	int length;

	while (*s != '\0')
	{
		length;
		s++;
	}
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
