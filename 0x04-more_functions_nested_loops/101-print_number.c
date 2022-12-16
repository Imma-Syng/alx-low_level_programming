#include "main.h"

/**
 * print_number - Function that prints an integer.
 *
 * @n: int type number
 *
 */

void print_number(int n)
{
	if (n > -10 && n < 10)
	{
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}
			_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		n = n % 10;
		if (n < 0)
			n = n * -1;
		_putchar(n + '0');
	}
}
