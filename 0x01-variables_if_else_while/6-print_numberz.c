#include<stdio.h>

int main()
{
	int x;

	/**iniitializing x and setting it to zero
	 * further looping thru the numbers upto ten**/

		for (x=0; x<10; x++)
			
			putchar((x%10)+'0');
		
		putchar('\n');

		return (0);


}
