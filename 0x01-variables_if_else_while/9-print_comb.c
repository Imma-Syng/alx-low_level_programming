#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Returns: always 0 (success)
 *
*/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{																		putchar(',');
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
