#include "main.h"

/**
 * _isalpha - a function that checks for lowercase character.
 *@c: parameter to be checked
 *
 * Return: Always returns 0
 */

int _islalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

