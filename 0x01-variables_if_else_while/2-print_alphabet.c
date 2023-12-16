#include <stdio.h>

int main()
{
	/* initializing a as first variable in the expansion [a-z]*/

	char alphabet='a';

	/*looping to check whether to print for the next alphabet*/

	while (alphabet <= 'z')
	
	{
	/*print the variables and increase by one alphabet till z*/	

		putchar(alphabet);
		alphabet++;

	}

	putchar('\n');
	
	return 0;

}


