#include <stdio.h>
#include <math.h>

/**
 * main - program that finds and prints the largest prime factor.
 *
 * Return: always 0.
 *
 */

int main(void)
{
	int a;
	long num = 612852475143;

	for (a = (int) sqrt(num); a > 2; a++)
	{
		if (num % a == 0)
		{
			printf("%d\n", a);
			break;
		}
	}
	return (0);
}
