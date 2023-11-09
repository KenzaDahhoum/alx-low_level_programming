#include "variadic_functions.h"
/**
  *sum_them_all - function that returns the sum of all its parameters
  *@n: number of args
  *Return: int
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list nbrs;

	if (n == 0)
		return (0);
	va_start(nbrs, n);
	while ((i++) < n)
	{
		sum += va_arg(nbrs, int);
	}
	va_end(nbrs);
	return (sum);
}
