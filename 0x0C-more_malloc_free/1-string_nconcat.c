#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * string_nconcat -func
  * @s1: string
  * @s2: string
  * @n: intger
  * Return: return
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!ptr)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	while (s2 && s2[j] != '\0' && j < n)
		ptr[i++] = s2[j++];

	ptr[i] = '\0';
	return (ptr);
}
