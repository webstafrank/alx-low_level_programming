/**File: 100-print_comb3.c
 * Auth: Franklyn Denish*/

#include <stdio.h>

int main(void)
{
	int num1;
	int num2;

	/**this program prints all possible combination of 2 digits separated by commas, followed by space*/

	for ( num1=0; num1<9; num1++)
	{
		for(num2=num1+1; num2<10; num2++)

		{	
			putchar((num1%10)+ '0');

			putchar((num2%10)+ '0');


			if (num1==8 && num2==9)

				continue;

			putchar(',');

			putchar(' ');

		}
	}		
		putchar('\n');

		return (0);
}	
