#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - a function that prints out natural numbers
 *@n: number to start from
 *
 *Return: returns the sum of a and b.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", 1);
			if (i == 98)
				break;
			printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", 1);
			if (i == 98)
				break;
			printf(", ");
		}
	}
	printf("\n");
}

