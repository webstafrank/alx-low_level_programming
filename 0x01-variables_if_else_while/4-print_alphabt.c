#include <stdio.h>

int main()
{
	char n;
	
	/**initializing n and looping through the alphabets**
	 * printing the alphabets
	 * excluding e and q**/

	 for (n='a'; n<='z'; n++)
	  {	if (n != 'e' && n != 'q')
			putchar (n);
	  }
		putchar('\n');

	return (0);

}

			
