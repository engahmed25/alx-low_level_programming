#include"main.h"
/**
 * _islower - function to check if alpha is uppercase or lower.
 *
 * Return: return 1 if c is lowercase otherwise return 0
 *
 * @c: this is the variable to be checked
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
