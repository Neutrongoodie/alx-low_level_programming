#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX
    int n = rand();

    // Extract the last digit of n
    int lastDigit = n % 10;

    printf("The string Last digit of %d is ", n);
    
    if (lastDigit > 5)
        printf("and is greater than 5\n");
	else if (lastDigit == 0\)
        printf("and is 0\n")
	else 
        printf("and is less than 6 and not 0\n");

    return 0;
}
