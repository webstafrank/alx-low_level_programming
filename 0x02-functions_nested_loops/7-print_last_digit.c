#include "main.h"
/**a function that prints the last digit of a number
 * returns the last value of the last digit*/

int print_last_digit(int n)
{
	int last1= n %10;
		
	if (n < 0)

	last1 *= -1;
       
	_putchar(last1 + '0');
	return (last1);
}

