#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int m;

	while (1)
	{
		m = *s++;
		if (m == c)
		{
			return (s - 1);
		}

		if (m == 0)
		{
			return (NULL);
		}
	}
}
