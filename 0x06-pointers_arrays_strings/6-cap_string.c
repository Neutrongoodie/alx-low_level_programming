#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *cap_string - capitalizing
 * @str: input string
 * Return: return a pointer
 */

char *cap_string(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	int capitalize_next = 1;
	char *ptr = str;

	while (*ptr != '\0')
		if (strchr(" \t\n,;.!?\"(){}", *ptr) != NULL)
		{
			capitalize_next = 1;
		}
		else
		{
			(capitalize_next && *ptr >= 'a' && *ptr <= 'z');
			{
				*ptr -= 32;
			}
			{
			capitalize_next = 0;
			else if (!capitalize_next && *ptr >= 'A' && *ptr <= 'Z')
			}
		}
	{
		*ptr += 32;
		ptr++;
	}
	return (str);
}
