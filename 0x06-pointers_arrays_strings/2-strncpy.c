#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Function that copies a string
 * @n: input value
 * @dest: The destination of the string
 * @src: The source string
 * Return: A pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}

	return (start);
}
