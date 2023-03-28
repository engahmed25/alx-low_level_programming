#include <string.h>
#include "main.h"
/**
 * _strcat - concatenations two strings
 * @dest: the first string
 * @src: the second string
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = strcat(dest, src);
	return (ptr);
}
