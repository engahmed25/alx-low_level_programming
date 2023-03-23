#include "main.h"
/**
 * _abs - this function returns positive values only
 * @n: the number to be checked
 * Return: positive num
 */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
