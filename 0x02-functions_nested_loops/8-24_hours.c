#include "main.h"

/**Write a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Prototype: void jack_bauer(void);
 *
 * void jack_bauer(void)
 */

void jack_bauer(void)
{
	int w, x;
       	int y, z;

	for (w=0; w<=2; w++)
	{
		for (x=0; x<=9; x++)
		{
			if ((w <=1 && x<=9) || (w <= 2 && x<= 3))
			{		
				for (y = 0; y <= 5; y++)
				{
					for (z = 0; z<= 9; z++)
					{
						_putchar(w + '0');
						_putchar(x + '0');
						_putchar(58);
						_putchar(y + '0');
						_putchar(z + '0');
						_putchar('\n');
					}
				}
			}
		}
	
	
	}
		
}
