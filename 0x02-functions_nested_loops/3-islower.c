#include "main.h"
#include <ctype.h>

/**
 * _islower - function that test the lowercase
 * @c: the charactar
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	int n;

	if (islower(c))
		n = 1;
	else
		n = 0;
	return (n);
}


