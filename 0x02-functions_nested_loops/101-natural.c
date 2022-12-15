#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples.
 *
 * Return: 0
 *
 */

int main(void)
{
	int n, res;

	for (n = 0; n < 1024; n++)
		if (n % 3 == 0 || n % 5 == 0)
			res += n;
	printf("%d\n", res);
	return (0);
}
