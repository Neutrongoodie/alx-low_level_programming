#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;
	int m;

	for (m = 0; m < 9; m++)
		for (n = m + 1; n < 10; n++)
			putchar(m + '0');
	putchar(n + '0');
	if (m < 8 || n < 9)
		putchar(',');
	putchar(' ');
	putchar('\n');

	return (0);
}
