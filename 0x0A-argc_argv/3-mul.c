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
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
