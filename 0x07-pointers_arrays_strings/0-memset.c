#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: the string
 * @b: the char
 * @n: the first n bytes
 * Return: a string s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		s[i] = b;

	return (s);
}
