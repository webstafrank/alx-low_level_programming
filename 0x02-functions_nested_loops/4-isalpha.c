#include "main.h"
/**
 * Description: a function that checks for alphabetic character
 * @arg c
 *
 * return 1 on sucess, 0 on failure
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
