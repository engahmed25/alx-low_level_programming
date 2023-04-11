#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strdup - function
  * @str: param
  * Return: return
  */
char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *res;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		res[i] = str[i];
	return (res);
}

