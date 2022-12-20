#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 *
 * Return: int 0;
 */

int main(void)
{
	char trial[100];
	int a = 0, randNum = 0,  pass = 0;

	srand(time(NULL));

	for (a = 0; pass <= 2644; a++)
	{
		randNum = (rand() % 25) + 65;
		trial[a] = randNum;
		pass = pass + randNum;
	}

	trial[a++] = 2772 - pass;
	trial[a++] = '\0';

	printf("%s\n", trial);

	return (0);
}
