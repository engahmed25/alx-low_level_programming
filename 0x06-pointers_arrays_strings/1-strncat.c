#include <string.h>
#include "main.h"
/**
 * _strncat - concatenations two strings
 * @dest: the first string
 * @src: the second string
 * @n: the number of digit that will apend from src
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncat(dest, src, n);
	return (ptr);
}
