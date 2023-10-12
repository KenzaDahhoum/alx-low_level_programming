#include "main.h"
/**
  *print_line - function that draws a straight line in the terminal
  *Where n is the number of times the character _ should be printed
  *If n is 0 or less, the function should only print \n
  *@n: integer
  *
  *Return: always 0
  */
void print_line(int n)
{
	int ln;

	for (ln = 0 ; ln < n ; ln++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}

