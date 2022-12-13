#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: always 0 (success)
 *
*/

int main(void)
{
	int n;
	int m;

	for (n = 0; n < 9; n++)
	{
		m = n + 1;
		do {
			putchar('0' + n);
			putchar('0' + m);
			if (n < 8)
			{
				putchar(',');
				putchar(32);
			}
			m++;
		} 
		while (m < 10);
	}
	putchar('\n');
	return (0);
}
