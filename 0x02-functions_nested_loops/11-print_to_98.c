#include "main.h"

/**
 * a function that prints all natural numbers from n to 98, followed by a new line.
 * Prototype: void print_to_98(int n);
 * parameter: n
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 */

void print_to_98(int j)
{
	if (j >= 98)
	{
		while (j > 98)
		
			printf("%d, ", j--);
	}	
	
	else
	{
			while (j < 98)
				printf("%d, ", j++);
			printf("%d\n", j);
	}
}		
