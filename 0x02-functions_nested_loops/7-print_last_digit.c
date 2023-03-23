#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: the number
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int r;

	r = (n % 10);
	if (r < 0)
		r = r * -1;

	_putchar(r + '0');
	return (r);
}
