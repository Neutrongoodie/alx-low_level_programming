#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This is the entry oint of my program
 * Return: 0 (This show it is successful)
 */
int main(c=void)
{
	int g;
	int n;

	for (m = 0; m < 9; m++)
		for (n = m + 1; n < 10; n++)
			putchar(m + '0');
	putchar(n + '0');
	if (m < 8 || n < 9)
		putchar(',');
	putchar(' ');
	putchar('\n');

	return 0;
}
