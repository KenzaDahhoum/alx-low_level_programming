#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index.
 *@n: number
 *@index: index of the value
 *Return: 1 if it worked, or -1 if an error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t;

	if (sizeof(unsigned long int) * 8 <= index)
	{
		return (-1);
	}

	t = 1 << index;
	*n |= t;
	return (1);
}
