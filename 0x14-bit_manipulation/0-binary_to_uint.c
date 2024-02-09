#include "main.h"

/**a function that converts a binary number to an unsigned int.
 *
 * Prototype: unsigned int binary_to_uint(const char *b);
 * where b is pointing to a string of 0 and 1 chars 
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n,res;
	
	for (n = 0, res = 0; b[res] != 0; res++)
	{	
		if (b[res] == '1')
		       n =(n << 1) | 1;
		else if (b[res] == '0')
			n <<= 1;
		else if (b[res] != '0' && b[res] != '1')
			return (0);
	}

	return (n);
}
