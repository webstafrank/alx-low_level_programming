#include <stdio.h>
/**
 * main - Entry point of the program.
 * Description: the funtion prints single numbers of case 10 starting fron 0
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
			n++;
	}
	printf("%c", '\n');	
	return (0);
}
