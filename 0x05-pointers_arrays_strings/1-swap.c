#include "main.h"

/*a function that swaps the values of two integers.
 *
 * Prototype: void swap_int(int *a, int *b);
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}

