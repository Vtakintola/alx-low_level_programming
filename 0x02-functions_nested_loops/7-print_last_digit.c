#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *@n: test subject
 *
 * Return: The last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = n * (-1);
	_putchar((n % 10) + '0');
	return (n % 10);
}

