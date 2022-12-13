#include <stdio.h>

/**
 * main - prints alphabets in lower case and then uppercase
 *
 * Return: always 0
 *
*/

int main(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
