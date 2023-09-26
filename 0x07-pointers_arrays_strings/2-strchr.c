#include <stdio.h>
#include "main.h"
/**
 * *_strchr - function that locates a character in area
 * @s: The string to search in
 * @c: The character to locate
 * Return: A pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		{
			s++;
		}
	}

	return (NULL);
}
