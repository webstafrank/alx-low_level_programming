#include <stdio.h>
/**
 * main - Entry point of the program.
 * Description: printing single-digits separated by comma and space
 *
 * Return: always 0 (success)
 */

int main (void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar((digit % 10) + '0');
			if (digit == 9) 

			continue;

		putchar(',');

		putchar(' ');
	}
	putchar('\n');
	return (0);
}
