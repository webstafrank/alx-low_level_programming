#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * Description : main function creates random numbers and prints its info
 *
 * Return : 0 on success
 */
int main(void)
{
	int n, p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p = n % 10;

	if (p > 5)
	{
		printf("The last digit of %d is %d and it is greater than 5 \n", n, p);

	}
	else if (p == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, p);
	}
	else if (p < 6 && p != 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, p);
	}
	return (0);
}
