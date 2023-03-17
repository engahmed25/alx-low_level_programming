#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			printf("%i%i", i, j);
			if (j == 9 && i == j - 1)
				printf("\n");
			else
				printf(", ");
		}
	}

	return (0);
}
