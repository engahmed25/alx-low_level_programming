#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _realloc - func
  * @ptr: param
  * @old_size: param
  * @new_size: param
  * Return: return
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *res;
	char *old;

	if (old_size == new_size)
		return (ptr);

	if (!ptr)
	{
		res = malloc(new_size);
		return (res);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	res = malloc(new_size);

	if (!res)
		return (NULL);
	old = ptr;

	for (i = 0; i < old_size; i++)
		res[i] = old[i];

	free(ptr);
	return (res);
}
