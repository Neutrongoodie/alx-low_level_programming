#include <stdio.h>
#include "main.h"

/**
 *_strncat - Concatenate two strings, using at most n bytes from src.
 *@dest: The destination string where src will be concatenated
 *@src: The source string to concatenate to dest.
 *@n: The maximum number of bytes to append from src
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0' && n > 0)
	{*dest_end++ = *src++;
		n--;
	}
	*dest_end = '\0';

	return (dest);
}
