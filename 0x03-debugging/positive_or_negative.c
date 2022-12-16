#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative() - entry
 * Return: 0 return value
 */

void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", i);
	if (n == 0)
		printf("%d is zero\n", i);
	if (n < 0)
		printf("%d is negative\n", i);
	else (i=0);
}
