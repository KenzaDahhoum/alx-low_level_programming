#include "main.h"

/**
 *_memset -  function that fills memory with a constant byte.
 *@s: starting address of memory to be filled
 *@b: constant value
 *@n: the sizw of memory (number of bytes)
 *Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
