#include <unistd.h>

/**
 * _putchar - writes a single char to the STDOUT
 * @c: the char
 * Return: On success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
