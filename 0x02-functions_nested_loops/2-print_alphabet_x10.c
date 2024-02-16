/**File:2-print_alphabet_x10.c
 * Auth:Franklyn Denish*/

#include"main.h"

void print_alphabet_x10(void)
{
	int range=0;
	char letter;

	/*a function that prints 10 times the alphabet, in lowercase, followed by a new line*/
i		
		while(range++ <=9)
		{
			for(letter ='a';letter <= 'z'; letter++)
				_putchar(letter);
			_putchar('\n');
		}
}
