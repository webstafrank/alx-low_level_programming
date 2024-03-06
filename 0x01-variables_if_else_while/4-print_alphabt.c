#include <stdio.h>

/**
 * main - Entry point of the program.
 * Description: a function that prints alphabets except q and e
 *
 * Return: 0 on sucess
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
		putchar (n);
	}
	putchar('\n');
	return (0);
}
