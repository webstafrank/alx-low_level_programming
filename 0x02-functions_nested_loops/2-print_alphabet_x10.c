#include"main.h"
/**
 * pvoid print_alphabet_x10(void):prints 10 times the alphabet  in lowercase, followed by a new line
 *
 * Description: a function that prints 10 times the alphabet  in lowercase
 * prototype: void print_alphabet_x10(void)
 * Return: void
 */
void print_alphabet_x10(void)
{
	int range = 0;
	char letter;
		while (range++ <= 9)
		{
			for (letter = 'a'; letter <= 'z'; letter++)
				_putchar(letter);
			_putchar('\n');
		}
}
