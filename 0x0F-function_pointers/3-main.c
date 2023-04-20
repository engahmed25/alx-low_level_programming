#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *operator;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	op_func = get_op_func(operator);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	calc = op_func(num1, num2);
	printf("%d\n", calc);
	exit(EXIT_SUCCESS);
}
