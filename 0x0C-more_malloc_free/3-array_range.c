#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_range - func
  * @min: min
  * @max: max
  * Return: return
  */
int *array_range(int min, int max)
{
	int range;
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	range = max - min;

	ptr = malloc(sizeof(min) * (range + 1));

	if (!ptr)
		return (NULL);

	for (i = 0; i <= range; i++)
		ptr[i] = min++;

	return (ptr);
}
