#include "main.h"

/**
 * _isupper - a funtion that checks for uppercase
 * @c: character to be checked
 * Return: returns 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
