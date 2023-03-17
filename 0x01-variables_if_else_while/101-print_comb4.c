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
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				printf("%i%i%i", i, j, k);
				if (k == 9 && j == k - 1 && i == j - 1)
					printf("\n");
				else
					printf(", ");
			}
		}
	}

	return (0);
}
