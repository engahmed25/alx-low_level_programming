#include "main.h"
#include <string.h>
/**
 * _strchr -  function that locates a character in a string
 * @s: the string
 * @c: the char
 * Return: a pointer with the locate of the char
 */
char *_strchr(char *s, char c)
{
	unsigned long int i;
	char *pr;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			pr = &s[i];
			return (pr);
		}
	}
	return (0);
}
