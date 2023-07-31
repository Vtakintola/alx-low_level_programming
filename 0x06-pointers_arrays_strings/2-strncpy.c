#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that copies  strings
 * @dest: destination
 * @src: source
 * @n: bo of bytes to copy
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int q = 0;
	int k;
	char *p = src;

	while (*src != '\0')
	{
		i++;
		src++;
	}
	while (dest[q] != '\0')
		q++;
	if (i < n)
		k = q - i;
	for (j = 0; j <= n; j++)
	{
		if (j >= k)
			dest[j] = 'i';
		else
			dest[j] = *p;
		p++;
	}
	dest[i] = '\0';
	return (dest);
}
