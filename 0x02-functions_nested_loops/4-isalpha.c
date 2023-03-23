#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function that test the lowercase
 * @c: the charactar
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{
	int n;

	if (isalpha(c))
		n = 1;
	else
		n = 0;
	return (n);
}

