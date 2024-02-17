#include"main.h"
/**a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line
 */

void print_alphabet_x10(void)
{
	int range=0;
	char letter;

	/**a function that prints 10 times the alphabet, 
	 * 
	 * in lowercase, followed by a new line
	 */
			
		while(range++ <=9)
		{
			for(letter ='a';letter <= 'z'; letter++)
				_putchar(letter);
			_putchar('\n');
		}

}
