#include "main.h"
#include <stdio.h>
/**
 * reverse_array -  Function that reverrse content of array
 * @a: this denotes an interger
 * @n: this denotes number
 * Return: return 0
 */

void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		int temp = a[left];

		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}
