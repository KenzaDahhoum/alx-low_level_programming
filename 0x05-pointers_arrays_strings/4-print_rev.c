#include "main.h"
/**
  *print_rev - Prints a string in reverse followed by a new line.
  *@s: string
  *Return: void
  */
void print_rev(char *s)
{
	int len = 0;
	int i = 1;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
