#include "main.h"
/**
 * a function that returns the length of a string.
 * * Prototype: int _strlen(char *s);
 *Returns length of string
 */

int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}
