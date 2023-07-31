#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		return (a);
	}
	else if (b > c && b > a)
	{
		return (b);
	}
	else if (c > a && c > b)
	{
		return (c);
	}

}
