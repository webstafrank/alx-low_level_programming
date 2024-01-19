#include "main.h"
/**File: 5-sign.c5-sign.c
 *
 * Auth: Franklyn Denish
 *
 * Descr: a function that prints the sign of a number
 *
 * Return: 1 for +ve number, 0 for 0 and -1 for others*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return(-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
