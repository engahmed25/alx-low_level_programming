#include "function_pointers.h"
#include <stddef.h>
/**
  * array_iterator - func
  * @array: param
  * @size: param
  * @action: param
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action && array)
		for (i = 0; i < (int)size; i++)
			action(array[i]);
}
