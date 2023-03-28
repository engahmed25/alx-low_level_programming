#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _isupper - return is upper
 * @c: is upper
 * Return: Always 0 (success)
 */

int _isupper(int c)
{
	int a;

	if (isupper(c))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}

