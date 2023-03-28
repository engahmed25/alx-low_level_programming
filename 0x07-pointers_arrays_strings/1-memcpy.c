#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @src: the source string
 * @dest:the destination pointer
 * @n: the n bytes from src area
 * Return: the dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
