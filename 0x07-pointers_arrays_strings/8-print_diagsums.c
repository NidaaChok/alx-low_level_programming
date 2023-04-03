#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int j;
	int *b = a;

	for (j = 0; j < size; j++)
	{
		sum1 += b[j];
		b += size;
	}

	b = a;

	for (j = size - 1; j >= 0; j--)
	{
		sum2 += b[j];
		b += size;
	}

	printf("%d, %d\n", sum1, sum2);
}
