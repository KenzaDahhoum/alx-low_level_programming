#include "main.h"

/**
*clear_bit - sets the value of a bit to 0 at a given index
*@n: number of bits to clear
*@index: index
*Return: 0 if successful and 1 otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c;

	if (sizeof(unsigned long int) * 8 <= index)
	{
		return (-1);
	}
	c = ~(1 << index);
	*n = *n & c;
	return (1);
}

