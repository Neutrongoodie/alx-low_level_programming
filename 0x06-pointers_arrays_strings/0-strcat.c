#include <stdio.h>
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string(describe thr desitination string).
 * @src: The source string (describe the source string).
 * Return: 0
 */
char *_strcat(char *dest, char *src);
{
	int k = 0;
	int l = 0;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[l] != '\0')
	{
		dest[k] = src[l];
		k++;
		l++;
	}

	dest[k] = '\0';
	return (dest);
}
