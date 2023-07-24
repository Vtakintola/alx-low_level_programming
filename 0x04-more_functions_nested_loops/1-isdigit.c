#include "main.h"

/**
 * _isdigit - a funtion that checks for uppercase
 * @c: character to be checked
 * Return: returns 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
