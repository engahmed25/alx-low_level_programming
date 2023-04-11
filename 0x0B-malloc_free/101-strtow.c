#include "main.h"
#include <stdlib.h>

char **strtow(char *str);
int words_count(char *s);
/**
  * words_count - function
  * @s: param
  * Return : return
  */
int words_count(char *s)
{
	int words_count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ' || s[i-1] == ' ')
			words_count++;
		i++;
	}
	return (words_count);
}

/**
  * strtow - function
  * @str: param
  * Return: return
  */

char **strtow(char *str)
{
	int len = 0;
	int words;
	int i = 0;
	char **res;
	int s, start, end;
	int x = 0; 
	int y;

	while (str[i + len] != '\0')
		len++;
	words = words_count(str);

	if (words == 0)
		return (NULL);

	res = malloc(sizeof(char *) * (words));
	if (res == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if ((str[i] != ' ' && i == 0) || \
				(str[i] != ' ' && str[i -1] == ' '))
			start = i;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			end = i + 1;
			res[x] = malloc(sizeof(char) * (end - start));
			if (res[x] == NULL)
				return (NULL);
			s = start;
			for (y = start; y < end; y++)
			{
				res[x][y] = str[s];
				s++;
			}
			x++;
		}
	}
	return (res);
}
