#include <stdio.h>

int main()
{
	/*initializing a as the first of the pattern [a-z][A-Z]*/

	int alphabet;
	
	/*printing lowercases*/

		for (alphabet= 'a'; alphabet<= 'z'; alphabet++)
			putchar (alphabet);
	
	/*printing uppercases*/

		for (alphabet= 'A'; alphabet<= 'Z'; alphabet++)
			putchar (alphabet);
		
		putchar ('\n');
			

		return (0);

}
