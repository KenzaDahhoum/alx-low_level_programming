#include "main.h"
/**
  *_puts - function that prints a string, followed by a new line, to stdout.
  *@str: points to string
  *Return: string
  */
void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
		_putchar(*str + 0);
	}
	_putchar('\n');
}
