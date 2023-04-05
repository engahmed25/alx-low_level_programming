#include "main.h"

/**
  * factorial - func
  * @n: int
  * 0ret
  */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
