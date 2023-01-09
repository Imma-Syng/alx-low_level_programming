#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int b;
	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (b = 0; b < size; b++)
	{
		sum += a[(size * b) + b];
		sum1 += a[(size * (b + 1)) - (b + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
