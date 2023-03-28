#include "main.h"
/**
 * swap_int - swap the value of two int by two pointers
 * @a: the first int
 * @b: the second int
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
