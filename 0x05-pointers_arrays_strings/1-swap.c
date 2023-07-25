#include "main.h"

/**
 * swap_int - a function that swaps 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: returns void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
