#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -m This is the entry point of my program
 * Return: 0 (this indicate successful execution)
 */
int main()
{
	int n;
	int g;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 for (g = 0; g < 9; g++)
		 putchar(g + '0');
	         putchar(n + '0');
	 if (g < 8 || n < 9)
		 putchar('\n');
	 return (0);
