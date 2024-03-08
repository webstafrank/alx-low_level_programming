#include "main.h"

/**
 * Description :function prints alphabets in lowercase followed by a line
 * prototype: void print_alphabet(void)
 *
 * Return: 0 on success
 */

{
void print_alphabet(void)

	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
