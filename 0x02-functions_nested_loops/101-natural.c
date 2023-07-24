#include "main.h"
#include <stdio.h>

/**
 * Main - a function that prints the alphabet, in lowercase
 *
 * Return: Always returns 0
 */

int main(void)
{
	int n;
	int sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
		else
			continue;
	}
	prinf("%d\n", sum);
}

