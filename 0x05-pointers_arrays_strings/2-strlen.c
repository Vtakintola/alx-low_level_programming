#include "main.h"

/**
 * _strlen - a funciton that returns the lenght of a string.
 * @s: string to be checked.
 * Return: returns d lenght of s.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
