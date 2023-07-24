#include "main.h"
#include <stdio.h>

/**
 * main - where the program starts execution.
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
	printf("%d\n", sum);
	return (0);
}
