#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: always 0 (success)
 *
*/

int main(void)
{
	int n;
	int e;
	int b;

	for (b = 0 ; b != 8 ; b++)
	{
		for (n = b + 1 ; n != 9 ; n++)
		{
			e = n + 1;
			do {
				putchar('0' + b);
				putchar('0' + n);
				putchar('0' + e);
				if (b != 7)
				{
					putchar(',');
					putchar(32);
				}
				e++;
			} while (e != 10);
		}
	}
	putchar('\n');
	return (0);
}
