#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - source code one
 *
 * Return: 0 return 0
 *
*/

int main(void)

{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n% 10;
	if (j >5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, j);
	}
	else if (j < 6 && j != 0)
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, j);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, j);
	}
	return (0);
}
