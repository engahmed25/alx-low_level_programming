#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * print_numbers - func
  * @separator: param
  * @n: param
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (separator && i < n - 1)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
