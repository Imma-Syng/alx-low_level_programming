#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int c, d;

	for (c = 0; *s != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (*s == accept[d])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
