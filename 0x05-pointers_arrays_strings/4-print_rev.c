#include "main.h"
/**
  *print_rev - Prints a string in reverse followed by a new line.
  *@s: string
  *Return: void
  */
void print_rev(char *s)
{
	int ln;

	while (s[ln])
	{
		ln++;
	}
	while (ln--)
	{
		_putchar(s[ln]);
	}
	_putchar('\n');
}
