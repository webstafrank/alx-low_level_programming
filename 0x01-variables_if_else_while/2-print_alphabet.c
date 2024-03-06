#include <stdio.h>
/**
 * main - Entry point.
 * Description : main prints alphabets in lowercase followed by a new line
 *
 * Return: 0 on success.
 */
int main(void)
{
	/* initializing a as first variable in the expansion [a-z]*/

	char alphabet = 'a';

	/*looping to check whether to print for the next alphabet*/
	while (alphabet <= 'z')	
	{
	/*print the variables and increase by one alphabet till z*/
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
