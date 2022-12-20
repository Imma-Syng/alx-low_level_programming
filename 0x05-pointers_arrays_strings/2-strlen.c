#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: String to count
 *
 * Return: String length
 *
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
