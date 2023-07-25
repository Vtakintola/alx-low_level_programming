#include "main.h"

/**
 * _puts - a function that prints a string.
 * @str: sting to be printed.
 * Return: reurns void.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
