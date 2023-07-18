#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet, in lowercase
 *
 * Return: Always returns 0
 */

void print_alphabet_x10(void)
{
	char n;
	int p;
	
	for (p = 1; p <= 10; p++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}

