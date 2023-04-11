#include <stdio.h>

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", --argc);
	return (0);
}
