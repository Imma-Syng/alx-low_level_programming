#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that finds and prints the largest prime factor.
 *
 * Return: always 0.
 *
 */

int main(void)
{
	long int a, b;

	while (b < (a / 2))
	{
		if ((a % 2) == 0)
		{
			a /= 2;
			continue;
		}
		for (b = 3; b < (a / 2); b += 2)
		{
			if ((a % b) == 0)
				a /= b;
		}
	}
	printf("%ld\n", a);
	return (0);
}

