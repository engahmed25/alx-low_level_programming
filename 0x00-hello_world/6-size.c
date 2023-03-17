#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char A;
	int B;
	long int C;
	long long int D;
	float E;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(A));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(B));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(C));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(D));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(E));
	return (0);
}
