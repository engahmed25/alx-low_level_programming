#include "main.h"
#include <stdlib.h>
/**
  * str_concat - func
  * @s1: param
  * @s2: param
  * Return: return
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int x = 0;
	int len = 0;
	char *res;

	while (s1 != NULL && s1[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (s2 != NULL && s2[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while (s1 != NULL && s1[i] != '\0')
	{
		res[x] = s1[i];
		i++;
		x++;
	}
	i = 0;
	while (s2 != NULL && s2[i] != '\0')
	{
		res[x] = s2[i];
		i++;
		x++;
	}
	res[x] = '\0';
	return (res);
}
