#include <stdio.h>
/**
 * main - Entry point.
 * Description: the function prints aplhabets in uppercase and then lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/*initializing a as the first of the pattern [a-z][A-Z]*/
	int alphabet;
	/*lowercases*/
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			putchar (alphabet);
	/*uppercases*/
		for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
			putchar (alphabet);
		putchar ('\n');
		return (0);
}
