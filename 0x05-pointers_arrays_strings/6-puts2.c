#include "main.h"

/**
 * puts2 - Prints a string followed by a new line to stdout.
 * @str: string
 */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i <= len - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
