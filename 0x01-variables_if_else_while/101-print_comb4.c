/**File: 101-print_comb4.c
 * Auth: Franklyn Denish*/

#include <stdio.h>

int main(void)
{
        int num1, num2, num3;;
   
        /**this program prints all possible combination of 3 digits separated by commas, followed by space*/

        for ( num1=0; num1<8; num1++)
        {
                for(num2=num1+1; num2<9; num2++)

                {
                	for(num3=num2+2; num3<8; num3++)
			
			{	putchar((num1%10)+ '0');

                       		putchar((num2%10)+ '0');
				
				putchar((num3%10)+ '0');

                       		 if (num1==7 && num2==8 && num3==9)

                                	continue;
				 

                       		 putchar(',');

                       		 putchar(' ');

			}

                }
       
       	}
               		 putchar('\n');

	return (0);
}
