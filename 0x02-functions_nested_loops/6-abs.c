#include "main.h"

/**a function that computes the absolute value of an integer
 *
 * Return: the absolute value of an int or a zero*/

int _abs(int c)
{
	if (c < 0)
	{
		int abs_res;

		abs_res= c*-1;

		return (abs_res);
	}
	return (c);
}
