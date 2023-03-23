#include"main.h"
/**
 * _isalpha - this is check if character is alpha or not
 *
 * @c: checks input of function
 *
 * Return: return 1 if c is alpha otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
