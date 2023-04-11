#include "main.h"
#include <stdlib.h>

/**
  * argstostr - function
  * @ac: param
  * @av: param
  * Return: retun
  */
char *argstostr(int ac, char **av)
{
	char *arr;
	int i;
	int j;
	int x = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
	}

	arr = malloc((len + ac + 1) * sizeof(char));

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			arr[x] = av[i][j];
			j++;
			x++;
		}
		arr[x] = '\n';
		x++;
	}
	return (arr);
}
