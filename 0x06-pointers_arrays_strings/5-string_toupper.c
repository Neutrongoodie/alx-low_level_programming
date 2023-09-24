#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - lowercase letters of a string to uppercase
 * @str: Pointer
 * Return: return a pointer
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)

		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr = *ptr - 'a' + 'A'
			{
				ptr++
			}
	return (str);
}
