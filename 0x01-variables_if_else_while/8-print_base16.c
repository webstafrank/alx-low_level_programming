#include <stdio.h>
[
	int num1;
	char aplphabet;

	/*prining numbers in base 16 in lowercase*/

		for (num1=0; num1<10; num1++)
		
			putchar((num1%10) + '0');

		for (alphabet='a'; alphabet<='f'; alphabet++)
			
			putchar(alphabet);

		putchar('\n');

		return (0);

}

