#include "main.h"

/**a function that prints a string, followed by a new line, to stdout.
 *
 * Prototype: void _puts(char *str);
 *
 * return - string
 */

void _puts(char *str)
{
	int range;

	while (range >= 0)
	{
		if (range[str] == '\0')
		{	_putchar('\n');

			break;
		}
			_putchar(str[range])
				range++;
	}
}
