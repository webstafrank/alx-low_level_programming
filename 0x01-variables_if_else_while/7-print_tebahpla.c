#include <stdio.h>
/**
 * main - Entry point of the program.
 * Description: main prints alphabets in reverse
 *
 * Return: 0 on success
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
		
	putchar('\n');

	return (0);

}
