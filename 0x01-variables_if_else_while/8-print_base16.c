#include <stdio.h>

/**
 * main - Entry point of the program.
 * Description: main prints all the numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int y;
	char alph;

	for (y = 0; y < 10; y++)
		putchar((y % 10) + '0');

	for (alph = 'a'; alph <= 'f'; alph++)
			putchar(alph);

	putchar('\n');
	return (0);
}
