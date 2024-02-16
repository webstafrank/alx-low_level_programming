#include <unistd.h>

/**_putchar wites the char c to the stdout
 * returns 1 on success and -1 on error*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

