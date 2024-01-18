/**File: 3-islower.c
 * Auth: Franklyn Denish
 *
 *Desc: a function that checks for lowercase character*/

#include "main.h"

int _islower(int c)
{
	if (c >= 97 &&  c<= 122)
	{
		return (1);
	}

	return (0);
}
