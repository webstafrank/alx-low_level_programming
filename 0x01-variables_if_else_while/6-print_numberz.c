#include<stdio.h>

/**
 * main - Entry point of the program
 * Description: main prints all single digit numbers of base 10,with a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int x;
	
	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');
	putchar('\n');
	return (0);
}
