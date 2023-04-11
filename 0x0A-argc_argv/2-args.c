#include <stdio.h>

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
