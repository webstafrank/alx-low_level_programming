/**File: 4-isalpha.c
 *
 * Auth : Franklyn Denish
 *
 * Desc: write a function that checks for alphabetic character*/

#include "main.h"

int _isalpha(int c)
{
	if (( c >= 65 && c <= 90) || (c >= 97 && c <=122))
	{
	return (1);
	}
	return (0);
}
