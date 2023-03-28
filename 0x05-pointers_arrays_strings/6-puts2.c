#include "main.h"
#include <string.h>
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int counter;
	int i;

	counter = strlen(str);

	for (i = 0 ; i <= counter ; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
