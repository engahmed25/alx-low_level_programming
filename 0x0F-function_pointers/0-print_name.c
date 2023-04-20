#include "function_pointers.h"
/**
  * print_name -func
  * @name: param
  * @f: param
  * Return: return
  */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
