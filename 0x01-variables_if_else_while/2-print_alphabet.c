#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the sizes of various data types.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
        {
        char letter;

        for (letter = 'a'; letter <= 'z'; letter++)
        {
        /*prints the value of the alphabet*/
                putchar(letter);

        }
        /*adds a new line to the end of each letter*/
        putchar('\n');

        return (0);
        }
