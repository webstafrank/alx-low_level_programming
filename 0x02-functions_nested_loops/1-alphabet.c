#include "main.h"

/**File:1-alphabet.c
 * Auth: Franklyn Denish
 *
 * Descr: a function that prints  the alphabet in lowercase, followed by a new line*/

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; ++j)
	{
		_putchar(j);
	}
	
	_putchar('\n');


}
