#include "main.h"

/**
 * Description: a function that checks for lowercase character.
 * parameter: int _islower(int c)
 *
 * Return: None (void)
 */

int _islower(int c)
{
	if (c >= 97 &&  c <= 122)
	{
		return (1);
	}
	return (0);
}
