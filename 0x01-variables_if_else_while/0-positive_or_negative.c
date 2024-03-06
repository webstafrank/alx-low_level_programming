#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign a random number to the variable n each time it is executed
 *
 * return: sign of  a number
 */

int main(void)
{
	int n;
	
	(srand(time(0)));
	n = rand() - RAND_MAX / 2;
	
	/* checking for the value of n */
	
	if (n > 0)
	{
		printf("%d is positive\n", n);
	
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
