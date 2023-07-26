#include "main.h"

/**
 * _strncat - a function that concanates two strings.
 * @dest: destination string
 * @src: source string
 * @n: byte to copy
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= n; j++)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
