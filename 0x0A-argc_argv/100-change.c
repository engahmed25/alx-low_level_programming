#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0;
	int sum = 0;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		while (change > 0)
		{
			sum += change / coins[i];
			change %= coins[i];
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
