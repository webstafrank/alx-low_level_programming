#include<stdio.h>

/**
 * main - entry point of the program.
 * Description: function prints the sizes of data types
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("Size of a char:%lu\n", sizeof(char));
	printf("Size of a int:%lu\n", sizeof(int));
	printf("Size of a long int:%lu\n", sizeof(long int));
	printf("Size of a long long int:%lu\n", sizeof(long long int));
	printf("Size of a float:%lu\n", sizeof(float));
	return (0);
}
