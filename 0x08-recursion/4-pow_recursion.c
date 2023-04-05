#include "main.h"

/**
  * _pow_recursion - func
  * @x: param 1
  * @y: param 2
  * Return: int
  */
int _pow_recursion(int x, int y)
{
	if (x == 1 || x == 0)
		return (x);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
