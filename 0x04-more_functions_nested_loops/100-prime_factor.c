#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count, max;
	long num;

	num = 612852475143;
	max = -1;

	for (count = 2 ; num > 1 ; count++)
	{
		while (num % count == 0)
		{
			if (count > max)
			{
				max = count;
			}
			num = num / count;
		}
	}

	printf("%d\n", max);
	return (0);
}

