#include "main.h"

/**
 * mul - a funtion that multiplies 2 digits
 * @a: first digit
 * @b: second digit
 * Return: returns ab
 */

int mul(int a, int b)
{
	if (a < 0 or b < 0)
	{
		return (a * b * (-1));
	}
	else
		return (a * b);
}
}
