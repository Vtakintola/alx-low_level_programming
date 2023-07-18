#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always returns 0
 */

void print_alphabet(void)
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

