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
	n = n % 10;
	if (g > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, g);
	if (g == 0)
		printf("Last digit of %d is %d and is 0\n", n, g);
	if (n < 6 && g != 0)
		("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	retuen (0);
}
