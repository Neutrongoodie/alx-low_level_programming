#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)

	{
		return (NULL);
	}
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			{
				a++;
				s++;
			}
		}
	}
	return (NULL);
}
