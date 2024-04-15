#include "main.h"

/**
 * void swap_int - swaps the values of two integers
 * @a: pointer to the first integer.
 * @b: pointer to the second integer.
 *
 * Description: this function takes two parameters as aguments 
 * and swaps their values
 */

void swap_int(int *a, int *b)
{
	int nx = *a;
	*a = *b;
	*b = nx;
}
