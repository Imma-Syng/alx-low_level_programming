#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: to be checked
 *
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
