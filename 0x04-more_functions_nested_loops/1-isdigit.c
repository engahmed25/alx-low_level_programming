#include <ctype.h>
#include "main.h"
/**
 * _isdigit - return if it is digit or not
 * @c: is upper
 * Return: Always 0 (success)
 */

int _isdigit(int c)
{
	int a;

	if (isdigit(c))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
