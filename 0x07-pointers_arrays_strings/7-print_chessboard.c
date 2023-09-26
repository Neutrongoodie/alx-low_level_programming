#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - entry point
 * @a: input
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int i = 0; i < 8; i++)
		{
			for (int i = 0; i < 8; i++)
			{
				printf("%c ", a[i][j]);
			}
			 printf("\n");
		}
	}
	return (0);
}
