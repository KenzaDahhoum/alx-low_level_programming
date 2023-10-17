#include "main.h"
/**
  *puts_half - function that prints half of a string, followed by a new line
  *@str: string
  *Return: void
  */
void puts_half(char *str)
{
	int i, nb, ln;

	ln = 0;

	for (i = 0; str[i] != '\0'; i++)
		ln++;

	nb = (ln / 2);

	if ((ln % 2) == 1)
		nb = ((ln + 1) / 2);

	for (i = nb; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
