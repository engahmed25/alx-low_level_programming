#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (j = 0 ; s[j] ; j++)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (s[j] == accept[i])
			{
				return (&s[j]);
			}
		}
	}
	return ('\0');
}

