#include "main.h"

/**Desc: A function that prints the 9 times table, starting with 0.
 *
 * Prototype: void times_table(void);
 */

void times_table(void)
{
	int x, mult, times;

	for (x = 0; x <=9; x++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			times= x * mult;

			if (times <= 9)
				_putchar(' ');
			else
				_putchar((times / 10) +'0');

			_putchar((times % 10) + '0');
		}
		_putchar('\n');
	}
}
