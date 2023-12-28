#include <stdio.h>

int main ()
{
	int x;
	char letter;

	/**printing numbers of base 16 in lowercase ,followed by a new line**/
		for ( x=0; x<10; x++)
			
			putchar((x%10) + '0');

		for ( letter='a'; letter<='f'; letter++)

			putchar(letter);

		putchar('\n');

		return (0);

}
