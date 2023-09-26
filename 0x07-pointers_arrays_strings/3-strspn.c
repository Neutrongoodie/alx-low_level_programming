#include <stdio.h>
#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: The string to search in
 * @accept: The character to accept
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				count++;
			break;
			}
		}
		{
			a++;
		}
		{
			if (*a == '\0')
			{
				break;
			}
		}
		{
			s++;
		}

		return(0);
}
}
