#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point 
 * Description: Complete the source code in order to print whether the number stored in the variable n is positive or negative
 * Return: 0 (indicate execution success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == o)
		printf("%d is zero\n", n)
	else
		printf("%d is negative\n", n)
	Retun (0)
}
