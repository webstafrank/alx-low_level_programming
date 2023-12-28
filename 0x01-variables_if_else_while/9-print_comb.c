/**File: 9-print_comb.c
 * Auth: Franklyn Denish
 */

#include<stdio.h>

/**this program prints all possible combinations of single digit numbers separated by commas, followed with spaces*/

int main ()
{

	int number;

	for (number=0; number<=9; number++)
	{
		putchar((number%10)+'0');
		
		if(number==9)

			continue;

		putchar(',');

		putchar(' ');
	}

	putchar('\n');

	return (0);

}
