#include "main.h"
/**
  *print_sign - function that prints the sign of a number.
  *@n number
  *Return: 1 for positive number, -1 for negative number, 0 otherwise
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n < 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
